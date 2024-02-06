#include <Stdio.h>
#include <stdlib.h>

int main(){
    int* ptr;
    ptr = (int*) malloc(3*sizeof(int));
    for(int i = 0; i<2; i++){
        printf("\nEnter NO. %i: ", i+1);
        scanf("%i", &ptr[i]);
        //long a[i] = ptr[i];
    }
    printf("no. 3 value: %i", ptr[1]);

    return 0;
}
