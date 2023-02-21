#include <cs50.h>
#include <stdio.h>

int main(void){

    const int minePoint = 7;
    int point = get_int("What is you point in the test? ");

    if(point > minePoint){
        printf("You made more points than me :( \n");
    } else if (point < minePoint) {
        printf("You made less point than me ;) \n");
    } else {
        printf("Whe made de same point ;) \n");
    }

}