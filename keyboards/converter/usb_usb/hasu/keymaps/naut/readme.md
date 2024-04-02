# naut's Realforce TKL R2 Layout

Typing layer
![naut's Realforce TKL R2 layer 0](https://i.imgur.com/mcTGCI2.jpg)

Miscellaneous 
![naut's Realforce TKL R2 layer 1](https://i.imgur.com/FJom2Bu.jpg)

RGB lighting
![naut's Realforce TKL R2 layer 2](https://i.imgur.com/Z70usJQ.jpg)

Keyboard lockout
![naut's Realforce TKL R2 layer 3](https://i.imgur.com/Mrhngmy.jpg)

HHKB style base layer. Fn1 layer to toggle capslock and control media on the arrow keys. Fn2 turns off key input so you can mash buttons to your heart's content.

* Keymap Maintainer: [naut](https://github.com/nautxx)  

Make example for this keyboard (after setting up your build environment):

    make converter/usb_usb:naut

Flashing example for this keyboard:

    make converter/usb_usb:naut:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `RESET` if it is available
