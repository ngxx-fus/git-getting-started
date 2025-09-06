#include <stdio.h>

int main(int args, char** arg){
    printf("Hi from Nguyen Thanh Phu\n");
    for(int i = 0; i < args; ++i)
        printf ("arg[%d]: %s\n", i, arg[i]);

}
