# naut's Rama Works M4-A Layout

Coding layer
![naut's M4-A keymap layer 0](https://i.imgur.com/cTQUHy9.jpg)

Code in binary using this keymap.

* Keymap Maintainer: [naut](https://github.com/nautxx)

Make example for this keymap (after setting up your build environment):

    qmk compile -kb machine_industries/m4_a -km naut

Flashing example for this keyboard:

    qmk flash -kb machine_industries/m4_a -km naut

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `RESET` if it is available
