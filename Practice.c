#include<stdio.h>
#include <string.h>

struct node{
    int data;
    struct node *link;
}*head, *second, *end;

void count

void travering(struct node *ptr){
    while(ptr != NULL){
        //ptr->data = +10;

        printf("--%d--\n", ptr->data);

        ptr = ptr->link;
    }
    }

int main(){
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    end = (struct node*) malloc(sizeof(struct node));

    head->data = 10;
    head->link = second;
    second->data = 20;
    second->link = end;
    end->data = 30;
    end->link = NULL;

    travering(head);


return 0;
}
