#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int number;
    struct node *next;
}
node;

int main(void){

    node *list = NULL;

    node *n = malloc(sizeof(node));
    if(n == NULL){
        return 1;
    }

    n->number = 1;
    n->next = NULL;

    //Update the list

    list = n;

    //add a number to a list
    n = malloc(sizeof(node));
    if(n == NULL){
        return 1;
        free(list);
    }

    n->number = 2;
    n->next = NULL;

    //Linkando o secundo valor ao primeiro
    list->next = n;

    //add other number to a list
    n = malloc(sizeof(node));
    if(n == NULL){
        free(list->next);
        free(list);
        return 1;
    }

    n->number = 3;
    n->next = NULL;
    list-> next -> next = n;

    //Print the number
    for(node *tmp = list; tmp != NULL; tmp = tmp->next){
        printf("%i \n", tmp->number);
    }

    //Free list
    while(list != NULL){
        node *tmp = list->next;
        free(list);
        list = tmp;
    }

    return 0;
}