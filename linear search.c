#include <stdio.h>

int main(){
    int a[] = {56, 8, 3, 7, 0, 4, 8, 2, 56, 8, 3, 1, 0};
    double x = 4;
    int array_size = sizeof(x);
    int int_size = sizeof(a[5]);
    //int arraylength = array_size/int_size;
    printf("array size: %i\n", array_size);
    //printf("int size: %d\n", int_size);
    //printf("array length: %d\n", arraylength);
    //printf("value: %d\n", a[0]);

    return 0;
}

