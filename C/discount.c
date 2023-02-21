#include <stdio.h>
#include <cs50.h>

float discount(float price , int percentage);

int main(void){

    float regular = get_float("Tipe the regular price: ");
    float porcent_off = get_int("Tipe the sale: ");
    float total = discount(regular,porcent_off );

    printf("Sale price is %.2f\n", total);
}

float discount(float price, int percentage){

    float total = price * ( 100 - percentage) / 100;

    return total;
}