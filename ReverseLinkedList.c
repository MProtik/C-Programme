#include <stdio.h>
#include <stdlib.h>


struct linkedlist{
    int data;
    struct linkedlist *next;
}*first, *second, *third, *end, *newnode;

void traverse(struct linkedlist *ptr){
    while(ptr != NULL){
        printf("Element: %i, ", ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    first = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    second = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    third = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    end = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    newnode = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    end->data = 10;
    end->next = third;

    third->data = 9;
    third->next = newnode;

    newnode->data = 1000;
    newnode->next = second;

    second->data = 8;
    second->next = first;

    first->data = 7;
    first->next = NULL;



    traverse(end);

return 0;
}
