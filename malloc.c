#include <Stdio.h>
#include <stdlib.h>

int main(){
    int* ptr;
    ptr = (int*) malloc(0*sizeof(int));
    //for(int i = 0; i<2; i++){
        //printf("\nEnter NO. %i: ", i+1);
        //scanf("%i", &ptr[i]);
    //}
    for(int i = 10; i<14; i++){
        printf("\nno.%i value: %i", i, ptr[i]);
        //scanf("%i", &ptr[i]);
    }

    return 0;
}
