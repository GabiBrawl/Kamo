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

| Qty | Name               | Designator       | Unit Price (€) | Total (€) | Link                                                                 |
|-----|--------------------|------------------|----------------|-----------|----------------------------------------------------------------------|
| 2   | 10uF              | C14,C17         | 0.09          | 0.18     | [Digikey](https://www.digikey.pt/pt/products/detail/samsung-electro-mechanics/CL10A106KP8NNNC/3886850) |
| 1   | 100nF             | C18             | 0.09          | 0.09     | [Digikey](https://www.digikey.pt/pt/products/detail/samsung-electro-mechanics/CL05B104KP5VPNC/20498482) |
| 1   | WS2812C-2020      | L1              | 0             | 0        | ------                                                              |
| 5   | 10K               | R1,R2,R3,R4,R5  | 0.09          | 0.45     | [Digikey](https://www.digikey.pt/pt/products/detail/yageo/RC0603FR-0710KL/726880) |
| 1   | ESP32-S3-MINI-1-N8| U1              | 4.56          | 4.56     | [Digikey](https://www.digikey.pt/pt/products/detail/espressif-systems/ESP32-S3-MINI-1-N8/15295890) |
| 1   | A-MicroTF-1.85A   | U2              | 0.96          | 0.96     | [Digikey](https://www.digikey.pt/pt/products/detail/gct/MEM2052-00-195-00-A/18091687) |
| 1   | AP2112K-3.3TRG1   | U5              | 0.19          | 0.19     | [Digikey](https://www.digikey.pt/pt/products/detail/diodes-incorporated/AP2112K-3-3TRG1/4470746) |
| 1   | AH3377-W-7        | U9              | 0.33          | 0.33     | [Digikey](https://www.digikey.pt/pt/products/detail/diodes-incorporated/AH3327-W-7/22310022) |
| 1   | PCB               |                  | 3.07          | 3.07     |                                                                      |
|     | **Total**         |                  |                | **9.83** |                                                                      |

*Prices in EUR. Approximate total in USD: 11.50*

## Acknowledgements
Designed with 💙 by 𝕲𝕭

Special thanks to the Hack Club community for their support!