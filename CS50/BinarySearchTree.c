#include <stdio.h>
#include <stdlib.h>
#define arr_length 10

typedef struct node{
    int number;
    struct node *left;
    struct node *right;
}
node;

bool serach(nood *tree, int number){
    if(tree == NULL){
        return false;
    }
    else if(number < tree->number){
        return search(tree->left, number);
    }
    else if(number > tree->){
        return search(tree->right, number);
    }
    else{
        return true;
    }

}


int main(void){
node *list = NULL;
int leftnumber, rightnumber;

for(int i = 0; i < arr_length; i++){
    scanf("%i%i", &leftnumber, &rightnumber);
    node *l = malloc(sizeof(node));
    node *r = malloc(sizeof(node));
    if(l == NULL && r == NULL){
        return 0;
    }
    l->number = leftnumber;
    l->number = number;
    n->next = list;
    list = n;
}

node *ptr = list;
while(ptr != NULL){
      printf("->%i", ptr->number);
      ptr = ptr->next;
    }

}

