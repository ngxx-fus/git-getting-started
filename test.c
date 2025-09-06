#include <stdio.h>
#include <string.h>

const char* argList[] = {
    "--info",
    "--full-name",
    "--change-name",
}; 
const int numParamOfArg[] = {
    0,
    0,
    1
};

int main(int args, char** arg){
    printf("Hi from Nguyen Thanh Phu\n");
    if(strcmp(arg[1], "--info") == 0){
        printf("Secret: Nguyen Thanh Phu was born in 3 Feb!\n");
    }
    for(int i = 0; i < args; ++i)
        printf ("arg[%d]: %s\n", i, arg[i]);
    for(int i = 0; i < args; ++i){
        for(int j = 0; j < sizeof(numParamOfArg)/sizeof(int); ++j){
            if(strcmp(arg[i], argList[j]) == 0){
                switch(j){
                    case 0:
                        printf("Secret: Phu was born in 3 Feb!\n");
                        break;
                    case 1:
                        printf("Name: Nguyen Thanh Phu!\n");
                        break;
                    case 2:
                        if (i+1 == args) fprintf(stderr, "Not enough arg!\n");
                        else printf("Send changed name request! (new name: %s)\n", arg[++i]);
                        break;
                }
            }
        }
    }
}
