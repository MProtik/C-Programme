#include <stdio.h>

int main(void){
    int x = 10;
    int* p;
    p = &x;
    printf("->%i\n", *p);
    printf("%i", sizeof(char*));
}

