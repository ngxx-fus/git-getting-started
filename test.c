#include <stdio.h>
#include <string.h>

int main(int args, char** arg){
    printf("Hi from Nguyen Thanh Phu\n");
    if(strcmp(arg[1], "--info") == 0){
        printf("Secret: Nguyen Thanh Phu was born in 3 Feb!\n");
    }
    for(int i = 0; i < args; ++i)
        printf ("arg[%d]: %s\n", i, arg[i]);

}
