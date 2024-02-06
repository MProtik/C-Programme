#include <stdio.h>

int BinarySearch(int arr[], int size, int key){
    int start = 0, end = size - 1, mid;// = (start + end) / 2;
    /*while(start <= end){
        if(arr[mid] == key)
            return mid;
        else if(key < arr[mid])
            end = mid -1;
        else if(key > arr[mid])
            start = mid +1;

    mid = (start + end) / 2;
    }*/
    for(mid = 0; start <= end; mid = (start + end)/2){
        if(arr[mid] == key){
            return mid;}
        else if(key < arr[mid]){
            end = mid -1;}
        else if(key > arr[mid]){
            start = mid +1;}
    }
return -1;
}


int linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key)
            return i;
    }
 return -1;
}

int main(){
    int arr[] = {1, 4 , 5, 7, 8, 11, 15, 17, 18, 23, 24, 26, 28, 30};
    int size = sizeof(arr) / sizeof(int);
    int key = 8;
    printf("size: %i\n\n", size);
    printf("Your element is in index: %i through linearSearch\n", linearSearch(arr, size, 5));
    printf("Your element is in index: %i through BinarySearch\n", BinarySearch(arr, size, 23));


return 0;
}
