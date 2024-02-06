#include <stdio.h>
#include <stdlib.h>

int main(void){
    //dynamically allocate an array of size 3
    int *list = malloc(3 * sizeof(int));
    if(list == NULL){
        return 0;
    }
    //assign three numbers to that array
    list[0] =1;
    list[1] =2;
    list[2] =3;
    for(int i = 0; i < 3; i++){
        printf(">>>%i\n", list[i]);
    }
    //time passes
    printf("------------------------\n");
    //allocate new array of size 5
    int *list2 = malloc(5 * sizeof(int));
    //copy numbers from old array into new array
    if(list == NULL){
        free(list);
        return 0;
    }
    for(int i = 0; i < 3; i++){
        list2[i] = list[i];
    }
    //add fourth and fifth number to new list
    list2[3] = 4;
    list2[4] = 5;
    //free old array
    free(list);
    //remember new array
    list = list2;
    //print the array
    for(int i = 0; i < 5; i++){
        printf("->%i\n", list[i]);
    }
    //free new array
    free(list);return 0;
}
