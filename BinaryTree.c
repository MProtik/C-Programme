#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
} *ptr0;

int main(){
    struct node *ptr1, *ptr2;
    ptr0 = (struct node*)malloc(sizeof(struct node));
    ptr1 = (struct node*)malloc(sizeof(struct node));
    ptr2 = (struct node*)malloc(sizeof(struct node));

    ptr0->data = 2;
    ptr0->left = ptr1;
    ptr0->right = ptr2;

    ptr1->data = 2;
    ptr1->left = NULL;
    ptr1->right = NULL;

    ptr2->data = 2;
    ptr2->left = NULL;
    ptr2->right = NULL;



return 0;
}
