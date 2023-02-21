#include <cs50.h>
#include <stdio.h>

int main(void){

    int number[] = {7, 4, 5, 3, 9};

    printf("%i \n", number[0]);
    printf("%i \n", *(number + 1));
    printf("%i \n", *(number + 2));
    printf("%i \n", *(number + 3));
    printf("%i \n", *(number + 4));

}