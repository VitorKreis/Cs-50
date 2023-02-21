#include <stdio.h>


void meow(int n){
    for(int i = 0; i <= n; i++ ){
        printf("meow!! \n");
    }

}

int main(void){
    /* use a wile
    int i = 0;
    while(i <= 3 ){
        printf("meow :) \n");
        i++;
    }
    */
    /*other way to do this meow
    for(int i = 0; i <= n; i++ ){
        printf("meow!! \n");
    }
    */
    meow(4);

}