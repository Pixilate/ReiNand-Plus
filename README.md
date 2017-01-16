# ReiNand+
[![License (GPL version 3)](https://img.shields.io/badge/license-GNU%20GPL%20version%203-red.svg?style=flat-square)](http://opensource.org/licenses/GPL-3.0)

*This is just a reinand mod nobody will ever use*


**Compiling:**

You'll need armips and bin2c added to your Path. [HERE](https://reisyukaku.org/downloads/buildtools.zip) are the pre-compiled binaries for Windows.

    make - Compiles All. (launcher and a9lh)
    make a9lh - Compiles arm9loaderhax payload

Copy everything in 'out' folder to SD root and run!


**Features:**

* Ninjhax/MSET/Spider/A9LH support!

* Emunand/Patched Sysnand

* Sig checks disabled

* Firm partition update protection

* Ability to modify splash screen

* Ability to modify process patches
    * Region free CIAs
    * Region free Carts
    * Auto updates disabled
    * EShop update check disabled
    * RO verification disabled
    * Language Emulation via /rei+/locales

**Credits:**
 
 Cakes team for teaching me a few things and just being helpful in general! And for ROP/mset related code, and crypto libs.
    
 3DBREW for saving me plenty of reverse engineering time.
    
 Patois/Cakes for CakesBrah.
 
 Yifanlu for custom loader module!
 
 Steveice10/Gudenaurock for helping a lot with arm11 stuff!
 
 Normmatt for sdmmc.c and generally being helpful!
 
 AuroraWright for being helpful with better sysmod injection and stuff!
    
 Rei for coding everything else.
 
 CrimsonMaple for fixing Makefile, Loader and Making a Release.
 
 The community for your support and help!
 
 
**Side Note**
 
 This simply just a reinand modification due to it not being really updated and falling behind. I will try my best to add the following:
 
 * Reboot Patches for o3DS
 * code loading and other things
 * Clean Gui Screen
 
Im only working on this during my free time due to it not really being a priority for the time being so feel free to fork and push a merge for commits!
