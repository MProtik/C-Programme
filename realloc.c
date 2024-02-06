#include <Stdio.h>
#include <stdlib.h>

int main(){
    int* ptr;
    int n;
    ptr = (int*) calloc(n, n*sizeof(int));
    printf("Insert the limit->"); scanf("%i", &n);
    for(int i = 0; i<n; i++){
        printf("\nEnter NO. %i: ", i+1);
        scanf("%i", &ptr[i]);
    }
    for(int i = 0; i<n; i++){
        printf("\nno.%i value: %i", i, ptr[i]);
    }

    printf("Insert the limit->"); scanf("%i", &n);

    ptr = (int*) realloc(ptr, n*sizeof(int));
    for(int i = 0; i<n; i++){
        printf("\nEnter NO. %i: ", i+1);
        scanf("%i", &ptr[i]);
    }
    for(int i = 0; i<n; i++){
        printf("\nno.%i value: %i", i+1, ptr[i]);
    }
    free(ptr);
    for(int i = 0; i<n; i++){
        printf("\nno.%i value: %i", i+1, ptr[i]);
    }

    return 0;
}

