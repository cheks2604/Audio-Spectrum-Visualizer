A simple circuit made with arduino which converts audio into visual LED patterns
# Audio Spectrum Visualizer

## Overview
A real-time audio spectrum visualizer built using an Arduino Uno and an electret microphone module. The system converts live audio into visual LED patterns, demonstrating both signal processing and hardware-software integration.

## Features
- Real-time spectral visualization from live microphone input  
- Amplification & filtering circuit for clean signal capture  
- C++ logic for dynamic and accurate spectral display  
- Responsive LED matrix visualization  

## Technologies Used
- Arduino Uno  
- C++  
- Electret microphone  
- Signal amplification & filtering circuit  

## How It Works
The electret microphone captures ambient audio, which is amplified and filtered to remove noise. The Arduino processes the signal in real time, mapping frequencies to LED outputs.
## Note
I had a lot of trouble ensuring the ampplification and filtering circuit were working properly and since it became a bit more problematic than it needed to be so I ended up finalizing my build without it. This code would still work as intended and filter signals properly as long as you use a better microphone sensor than an electet microphone.
##Future Improvements
- Expand to multi-color LED matrix visualization  
- Add FFT-based analysis for finer frequency separation
- Replace elctet microphone module with amplifying and filtering microphone module.
<img width="960" height="1280" alt="image" src="https://github.com/user-attachments/assets/33457625-0b2e-421c-a9d6-847f3d479788" />

