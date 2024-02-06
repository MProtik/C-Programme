#include <stdio.h>

int check(int i){
int j=2, n;

while(j<10){
    if(i % j != 0)
        j++;
    else;
        n = i;

}
return n;
}

void main(){
int arr[100], i;
for(i=1; i<=100; i++){
    arr[i] = i;
}
printf("The whole array: ");
for(i=1; i<=100; i++){
    printf("%i, ", arr[i]);
}

printf("\n\nPrime number from 1 to 100: ");
for(i=1; i<=100; i++){
    printf("%i, ", check(arr[i]));
}


}
