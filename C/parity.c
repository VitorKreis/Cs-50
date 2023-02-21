#include <stdio.h>
#include <cs50.h>

int main(void){
    //Vefification of even or odd

    int x  = get_int("digit you numeber: ");

    if(x % 2 == 0){
        printf("Your number is even \n");
    }else{
        printf("Your number is odd \n");
    }
}