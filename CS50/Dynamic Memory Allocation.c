#include <stdio.h>
#include <stdlib.h>

int main(void){
    int m = 10;
    int* a = &m;
    int* b = calloc(3, sizeof(int));
    int* c = malloc(1 * sizeof(int));
    a = b = c;
    *b = m+2;
    *a = 100;
    *c = 45345;
    *b = 668;
    *b = m+2;
    free(b);
    printf("a->%i, b->%i, c->%i\n", *a, *b, *c);
    printf("size->%i", sizeof(*b));

}

