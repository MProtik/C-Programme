#include<stdio.h>
#define lim 5

int main(){
int i, arr[lim] = {4, 67, 5, 3, 5}, sum = 0;

    for(i=0; i<lim; i++)
    {
        sum +=arr[i];

    }
printf("Summation of array: %i", sum);

return 0;
}
