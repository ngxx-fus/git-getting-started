#include "header1.h"


void header2_h_foo(){
    printf("[header1.h] This function is full declared in header1.c!\n");
    printf("[header1.h] hxw=%dx%d (%p, %p)", scrSizeH, scrSizeW, &scrSizeH, &scrSizeW);
}
