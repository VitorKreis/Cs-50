#include <stdio.h>
#include <cs50.h>

int main(void){
    char num = get_char("Do you agree(Y/N)?");

    if(num == 'y' || num == 'Y'){
        printf("Agreed ;)\n");
    }else if(num == 'n'  || num == 'N'){
        printf("Denied ;) \n");
    }
}