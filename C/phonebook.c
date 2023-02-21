#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    string name;
    string phone;
}
person;

int main(void){
    person people[2];
    people[0].name = "Vitor";
    people[0].phone = "41 997166945";

    people[1].name = "Jose";
    people[1].phone = "45 974856785";



     for (int i = 0; i < 2; i++){
        if(strcmp(people[0].name, "Vitor") == 0){
            printf("Fould and the number: %s\n", people[0].phone);
            return 0;
        }
     }

     printf("Not Fould\n");
     return 1;
}