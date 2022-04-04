# yggdrasil
<div align="center">
  <img width="300" height="300" src="https://raw.githubusercontent.com/LoyalPotato/yggdrasil/main/media/logo_white_bg_text.svg" alt="Yggdrasil">
</div>

This is yggdrasil's qmk configuration files. The repo for the design, schematics and other stuff can be found [here](https://github.com/LoyalPotato/yggdrasil)

It's a 36% split keyboard that is tailored to be comfortable to my hand span.

* Keyboard Maintainer: [David Ribeiro](https://github.com/LoyalPotato)
* Hardware Supported: ProMicro Type-C, Yggdrasil PCB
* Hardware Availability: [USB C ProMicro](https://www.aliexpress.com/item/1348800135.html)
* Keyboard Repo: [Yggdrasil](https://github.com/LoyalPotato/yggdrasil)

Make example for this keyboard (after setting up your build environment):

    make yggdrasil:default

Flashing example for this keyboard:

    make yggdrasil:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `RESET` if it is available
