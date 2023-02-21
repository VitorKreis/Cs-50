#include <cs50.h>
#include <stdio.h>
#include <string.h>


int string_length(string s);

int main(void){
    string name = get_string("What's your name? ");

    int length = strlen(name);

    printf("%i \n", length);
}