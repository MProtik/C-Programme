#include <stdio.h>

int Search(int key, int arraylength, int a[]){
        int i;
        for(i = 0; i < arraylength; i++){
            if(a[i] == key)
                return i;
        }
    return -1;
}





int main(){
    int i, a[] = {1, 3, 6, 8, 3, 8, 2, 4, 5, 7, 9};
    int key;
    int arraysize = sizeof(a);
    int intsize = sizeof(a[0]);
    int arraylength = arraysize / intsize;

    printf("Which number you want to search for..?\n->");
    scanf("%d", &key);

    int data;
    data = Search(key, arraylength, a);
    if(data == -4)
    {
        printf("Your searched data has not been found.");
    }
    else
    {
        printf("Your searched data has been found on %i.", data+1);
    }
    return 0;
}
