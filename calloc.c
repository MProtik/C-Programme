#include <Stdio.h>
#include <stdlib.h>

int main(){
    int* ptr;
    ptr = (int*) calloc(2, 4*sizeof(int));
    for(int i = 0; i<2; i++){
        printf("\nEnter NO. %i: ", i+1);
        scanf("%i", &ptr[i]);
    }
    for(int i = 0; i<2; i++){
        printf("\nno.%i value: %i", i, ptr[i]);
    }

    return 0;
}
