# macropad_xiao

![macropad_xiao](imgur.com image replace me!)

4 x 1 Macro Pad with MX Red Cherry Switches. It will have a metal body. I made this project with QMK firmware and I made it because I frequently switch between my laptop and my laptop plugged into my monitor, where I use a separate keyboard without all of my Mac's shortcuts and stuff, so I wanted a separate, fully customizable solution. I have made it for CNC, but I would like to have a customizable color, and I have a 3D printer, so I think it would be better to 3D print the case for me.

* Keyboard Maintainer: [anishmalladi05](https://github.com/anishmalladi05)
* Hardware Supported: SEEED STUDIO XIAO RP2040
* Hardware Availability: In the BOM



## Bootloader

Enter the bootloader in 3 ways:

* **Physical reset button**: Hold the B button, and while holding, double press the R button, and then release
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

Picture of product (render):
<img width="222" height="162" alt="Screenshot 2026-05-06 at 1 51 36 PM" src="https://github.com/user-attachments/assets/5cecb20d-e52e-438e-a03a-34fd9b796080" />

Routing/Schematic:
<img width="430" height="310" alt="Screenshot 2026-05-11 at 4 02 58 PM" src="https://github.com/user-attachments/assets/43b1855f-e23f-44e8-aaf6-37a005b5b44e" />
<img width="667" height="757" alt="Screenshot 2026-05-11 at 4 03 14 PM" src="https://github.com/user-attachments/assets/4948371a-db3f-4bf5-be8b-55577c9bb17a" />

PCB:
<img width="415" height="412" alt="Screenshot 2026-05-11 at 4 03 38 PM" src="https://github.com/user-attachments/assets/77530984-325a-4ef8-960b-45d682669b84" />

BOM:
[BILLOFMATERIALS.md](https://github.com/user-attachments/files/28686605/BILLOFMATERIALS.md)
|Name                    |Purpose                                                                                               |Quantity|Total Cost (USD)|Link                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |Distributor|
|------------------------|------------------------------------------------------------------------------------------------------|--------|----------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-----------|
|Custom Case             |to enclose everything. i will 3d print it so its self funded                                          |1       |84.00           |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |jlc3dp     |
|Keycaps MX CHERRY RED   |to press but i already have so its self funded                                                        |1       |16.99           |https://www.amazon.com/CHERRY-Silent-Mechanical-Keyboard-Switches/dp/B0FYRGWPGL/ref=sr_1_1_sspa?crid=3AAJ39A48BTCW&dib=eyJ2IjoiMSJ9.mbh2OSxeFi0woU93IJYiWmx03TEHm99NT3zGwuDFDPWqpv6hAgW_8k_iUDWw0WcF2UvreiSerO1g8RbLMeJcHXA6wk8tORoGxKZStaSciLYi_6vmhSC3EUIKwVJ6PsDj1f4V6l3VgVRZyx_b-pUDZa2ZsE7nn23oiAIltiP9jZpQZBK3ah4fohQVN1yzxRXI2R6w9JG8jb2PCvQkuIb2PclF8o44CmqGdqymRSTACks.tqz6PL-ZdX6D4iQJLL3MC5XEHX8ga8Y06im_WF97PV8&dib_tag=se&keywords=mx%2Bcherry%2Bred&qid=1778516185&sprefix=mx%2Bcherry%2Br%2Caps%2C213&sr=8-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&th=1                                                                                                                                                                                                      |amazon     |
|PCB                     |To connect everything. 3.30 dollar shipping to my address with Global Standard Direct Line (Cheapest))|1       |5.30            |https://cart.jlcpcb.com/shopcart/cart                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |JLCPCB     |
|Seeed Studio XIAO RP2040|Microcontroller to talk to computer                                                                   |1       |3.99            |https://www.seeedstudio.com/XIAO-RP2040-v1-0-p-5026.html                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |seeedstudio|
