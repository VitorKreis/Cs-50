#include <stdio.h>
#include <cs50.h>

int main(void){
    int score[3];

    for(int i = 0; i < 3; i++){
        score[i] = get_int("Score: ");
    }

    printf("Avarage: %.2f \n" , (score[0] + score[1] + score[2]) / 3.0);
}