# boards
Board pinouts for SAMWISE and its test pucks

These go into ~/.pico-sdk/sdk/2.1.1/src/boards/include/boards/.  Use do_copy.sh to install them.  Then they appear in the boards menu in RPi Extension (initiate the menu at the lower right, the dropdown occurs from the command entry at the top center of the screen.)

The goal is to be able to select a board and run PiTest to get a summary
of the board's functionality.

  -------------------- -----------------------
  Board Name           Comment
  SAMWISE              SSI-provided software
  P3_6b                Original
  PiCubed              Current
  ADCS                 Current
  Motor                Current
  \<MCU\>\<Pinout\>    The test pucks
  Pico                 Bare board
  Pico2                Bare board
  -------------------- -----------------------

Notes

Each board has a .h file. The custom boards import from the official
Pico2.h

Devices which are sharing pins and not used on the present board are
given PICO_ERROR_GENERIC

You'll notice the labels match the schematics; the board name is not
prefixed and "PIN" is not suffixed.

Schematic symbols for I2C, SPI and UART probably should not have custom
names. Where they do, they are aliased with the existing bus name

> I2C0 & I2C1: SDA0, SDA1 etc
> SPI0 & SPI1
> UART0 & UART1

