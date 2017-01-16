/*
*   main.c
*       by Reisyukaku (optimized by Touka)
*   Copyright (c) 2015 All Rights Reserved
*
*   Minimalist CFW for 3DS
*/

#include "firm.h"
#include "draw.h"
#include "fs.h"

int main(){
    mountSD();
    loadSplash();
    loadFirm();
    patchFirm();
    launchFirm();
    return 0;
}