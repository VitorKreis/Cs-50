#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void){
    string name[] = {"Jose", "Pedro", "Claudio", "Joao", "Ana"};

    for(int i = 0; i < 5; i++){
        if(strcmp(name[i], "Ana") == 0){
            printf("Fould\n");
            return 0;
        }
    }

    printf("Not fould\n");
    return 1;
}