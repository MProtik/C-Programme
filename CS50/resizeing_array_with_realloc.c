
#include <stdio.h>
#include <stdlib.h>

int main(void){
    //dynamically allocate an array of size 3
    int *list = malloc(3 * sizeof(int));
    if(list == NULL){
        return 1;
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
    //resize old array to be new array of size 5
    int *list2 = realloc(list, 5 * sizeof(int));
    //copy numbers from old array into new array
    if(list == NULL){
        free(list);
        return 1;
    }

    //add fourth and fifth number to new list
    list2[3] = 4;
    list2[4] = 5;
    //remember new array
    list = list2;
    //print the array
    for(int i = 0; i < 5; i++){
        printf("->%i\n", list[i]);
    }
    //free new array
    free(list);
return 0;
}
