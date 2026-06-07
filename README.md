# macropad_xiao

![macropad_xiao](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [anishmalladi05](https://github.com/anishmalladi05)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make macropad_xiao:default

Flashing example for this keyboard:

    make macropad_xiao:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
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
|EC11 Rotary Encoder     |To scroll                                                                                             |1       |0.99            |https://www.aliexpress.us/item/3256808424331150.html?spm=a2g0o.productlist.main.12.4fe77a17YCSCgL&aem_p4p_detail=20260506134750869722704126900008199017&algo_pvid=fe8022a9-2410-4bca-bfe2-c0e0660fe055&algo_exp_id=fe8022a9-2410-4bca-bfe2-c0e0660fe055-11&pdp_ext_f=%7B%22order%22%3A%22274%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%212.93%210.99%21%21%212.93%210.99%21%40210328d417781004708258053e3f68%2112000045944331228%21sea%21US%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3Ae6d55c10%3Bm03_new_user%3A-29895%3BpisId%3A5000000203537378&curPageLogUid=81PmG89q6H8u&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008610645902%7C_p_origin_prod%3A&search_p4p_id=20260506134750869722704126900008199017_3|AliExpress |
|PCB                     |To connect everything. 3.30 dollar shipping to my address with Global Standard Direct Line (Cheapest))|1       |5.30            |https://cart.jlcpcb.com/shopcart/cart                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |JLCPCB     |
|Seeed Studio XIAO RP2040|Microcontroller to talk to computer                                                                   |1       |3.99            |https://www.seeedstudio.com/XIAO-RP2040-v1-0-p-5026.html                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |seeedstudio|
