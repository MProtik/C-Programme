#include <stdio.h>

void main(){
int limit = 5;
int i, j, arr[limit];

printf("Insert the array values");
for(i = 0; i<limit; i++)
{
    printf("\n->");
    scanf("%i", &arr[i]);
}

printf("arr:");
for(j = 0; j<limit; j++)
{
    arr[j] = arr[j] * 2;
    printf(" %i", arr[j]);
}
}
