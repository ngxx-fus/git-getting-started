#ifndef __HEADER1_H__
#define __HEADER1_H__

#include "global.h"
#include "stdio.h"

void header1_h_foo(){
    printf("[header1.h] This function is full declared in header1.h!\n");
    printf("[header1.h] hxw=%dx%d (%p, %p)", scrSizeH, scrSizeW, &scrSizeH, &scrSizeW);
}

void header2_h_foo();

#endif 
