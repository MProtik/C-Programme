#include <stdio.h>
#include <stdlib.h>
#define arr_length 10

typedef struct node{
    int number;
    struct node *next;
}
node;

int main(void){
node *list = NULL;
int number;

for(int i = 0; i < arr_length; i++){
    scanf("%i", &number);
    node *n = malloc(sizeof(node));
    if(n == NULL){
        return 0;
    }
    n->number = number;
    n->next = list;
    list = n;
}

node *ptr = list;
while(ptr != NULL){
      printf("->%i", ptr->number);
      ptr = ptr->next;
    }

}
