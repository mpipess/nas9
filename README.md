# nas9

This project came about as I built a breadboard computer based on the MC6809
and needed an assembler for it. I had written assembly for my Color Computer 2 using 
EDTASM and very much liked that syntax, and in searching for a similar assembler,
I ended up coming across Albert van der Horst's Linux port of as9. This project
aims to clean up and improve on that implementation.

## Changes from Original

To see what Albert changed from the MS-DOS port and to get more original source code,
see his [website](https://home.hccnet.nl/a.w.m.van.der.horst/m6809.html).

My main goals for this project are the following:  
1. Clean up and modernize the code
    * Restructure build system (done)
    * Modernize syntax (done)
    * Simplify code structure (to do)
2. Standardize option flags (to do)  
    For example:  
    ```
    $ as9 main.asm -bin cre s19
    ```
    becomes
    ```
    $ nas9 main.asm -bin -cre -s19
    ```
3. Add an output file flag like gcc -o (to do)
