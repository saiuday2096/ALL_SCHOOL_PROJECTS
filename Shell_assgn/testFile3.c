#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    printf("------TASK 2-------------------------\n");

    for(int i = 0; i < argc; i++){
        printf("arg%d: %s \n", i, argv[i]);
    }
    printf("\n");

    return 0;
}