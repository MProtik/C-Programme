#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head, *newnode;

void traversal(struct Node *ptr){
    while(ptr!= NULL){
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
}

int node(int data, struct Node *ptr){
}

int main(){
    struct Node * second;
    struct Node * third;

    //Allocation memory for nodes in the linked list in heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    newnode = (struct Node *) malloc(sizeof(struct Node));
    //link 1st and 2nd node.
    head->data = 7;
    head->next = second;
    //link 2nd and 3rd node.
    second->data = 8;
    second->next = third;
    //link 3rd and null node(ending the list).
    third->data = 9;
    third->next = NULL;

    //insertion in linkedlist.
    newnode-> data = 4;
    newnode->next = head;
    head = newnode;

    traversal(head);


return 0;
}
