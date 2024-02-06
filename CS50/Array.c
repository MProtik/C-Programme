#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *list = (int*)malloc(3*sizeof(int));
    if(list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *new_list = realloc(list, 4 * sizeof(int));
    if(new_list == NULL){
        free(list);
        return -1;
    }
    /*for(int i = 0; i<3 ; i++)
    {
        new_list[i] = list[i];
    }*/
    //new_list = list;        ///pointing the list to new_list. easy way to copy
    free(list);
    list = NULL;
    list = new_list;        ///again pointing the new_list to list.

    list[3] = 4;

    for(int i = 0; i < 4; i++)
    {
        printf("->%i\n", list[i]);
    }
    free(*new_list);
    free(*list);
}
