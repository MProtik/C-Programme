#include <stdio.h>
#define LIMIT 5

float AVG(int arr[]){
    int i, sum = 0;

    for(i=0; i<LIMIT; i++)
    {
        sum += arr[i];
    }
return (float)sum / LIMIT;
}
int main(){

    int arr[LIMIT] = {5, 4, 2, 6, 87};
    printf("Average %f", AVG(arr));

    return 0;
}
