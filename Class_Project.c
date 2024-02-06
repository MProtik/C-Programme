#include<stdio.h>
#define limit 5
int sum = 0;
int arr[limit];
float AVG(int arr[]){
    for(int i=0; i<limit; i++)
        sum += arr[i];

return (float)sum/limit;
}
int main(){
    int arr[limit];
    system("COLOR 0A");

    for(int i=0; i<limit; i++){
        printf("\n->");
        scanf("%i", &arr[i]);
}

    printf("\nArray: ");
    for(int i=0; i<limit; i++){
        printf(" %i", arr[i]);
}

    printf("\nAverage: %f", AVG(arr));
}
