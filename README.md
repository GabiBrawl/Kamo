# Kamo ✦ かも
A custom Rubber Ducky built using an ESP32-S3 Mini. Features an SD Card slot for sotring the payloads, a WS2812C LED for status indication, and the ability to be controlled remotely via the WiFi from the ESP32.

No mechanical switches in sight. Just a tap of a magnet on the Hall Effect Sensor can trigger any action programmed inside the SD Card.

> Kamo (かも) is the Japanese word for "wild duck", symbolizing a naive target that is easy to prey upon.

## PCB Design

The PCB in this project was designed using EasyEDA Pro.
![Schematic](/pcb/REV1/SCH.png)
![PCB Top 3D View](/pcb/REV1/PCB_TOP.png)
![PCB Bottom 3D View](/pcb/REV1/PCB_BOT.png)
![PCB Assembled Top](/pcb/REV1/3D_TOP.png)
![PCB Assembled Bottom](/pcb/REV1/3D_BOT.png)

Check the project files in the [`pcb/REV1/`](pcb/REV1/) folder.

## Firmware

Custom firmware made by me. Will be developed in CPP using the ESP-IDF framework. At the time of submission will still be in heavy WIP and completely unreliable.

For flashing the firmware I'm hoping that plugging in the device while holding the magnet near the Hall Effect Sensor will put the device in flashing mode. From there using the ESP-IDF tools with a simple command should do the trick.

## Bill of Materials
WIP

## Acknowledgements
Designed with 💙 by 𝕲𝕭

Special thanks to the Hack Club community for their support!