#include <stdio.h>

int BinarySearch(int arr[], int key, int length){
    int start = 0;
    int end = length - 1;
    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == key){
            return mid;}
        else if(key > arr[mid]){
            start = mid + 1;}
        else if(key < arr[mid]){
            end = mid -1;}
    }
    return -1;
}
int main(){
int array[] = {2, 3, 3, 5, 6, 7, 9};
int length = sizeof(array)/sizeof(int);
int key = 2;
printf("The target element is in index: %i", BinarySearch(array, key, length));
    return 0;
}
