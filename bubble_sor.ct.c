#include <stdio.h>

int arr[] = {4, 7, 2, 4, 6, 7, 2, 8, 0, 5};
int i, j, temp;
int n = sizeof(arr)/sizeof(arr[0]);

void loop(int arr[]){
    for(i = 0; i < n; i++){
        printf("%i, ", arr[i]);
    }
}

int main(){
    printf("Given array: ");
    loop(arr);
    printf("\n");
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nSorted array:");
    loop(arr);


return 0;
}
