#ifndef __HEADER2_H__
#define __HEADER2_H__

#include "global.h"

#define colorDept 16

void header3_h_foo(){
    printf("[header2.h] This function is full declared in header2.h!\n");
    printf("[header2.h] hxw=%dx%d (%p, %p)", scrSizeH, scrSizeW, &scrSizeH, &scrSizeW);
}

#endif 
