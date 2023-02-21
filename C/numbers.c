#include <cs50.h>
#include <stdio.h>


int main(void) {
    int numbers[] = {6, 5, 8, 2, 4, 0};

    for (int i = 0; i < 7; i++){
        if(numbers[i] == -1){
            printf("Fould\n");
            return 0;
        }
    }
    printf("Not Fould\n");
    return 1;

}