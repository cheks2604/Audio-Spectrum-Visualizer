const int microphonePin = A0;
int red   = 11;
int green   = 10;
int blue = 6;

void setup() {
  Serial.begin(9600);
}

void loop() {
 int mn = 1024;
 int mx = 0;

 for (int i = 0; i < 10000; ++i) {
  int val= analogRead(microphonePin);

  mn= min(mn, val);
  mx= max(mx, val);
 }
 int delta= mx-mn;
 if (delta<20){
  digitalWrite(red, HIGH);
  delay(2000);
 }
 if (delta>200){
  digitalWrite(blue, HIGH);
  digitalWrite(red, HIGH);
  delay(1000);

 } 

 else{
  digitalWrite(red, HIGH);
 }
 if (delta>500){
  digitalWrite(green, HIGH);
  digitalWrite(red, HIGH);
 delay(1000);
 }
 Serial.print("Min=");
 Serial.print(mn);
 Serial.print(" Max=");
 Serial.print(mx);
 Serial.print(" Delta=");
 Serial.println(delta);
}

