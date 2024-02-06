#include<stdio.h>

main(){
int i, N, sum = 0;

printf("Enter the digit->");
scanf("%d", &N);
N = 10;
for(i = 5; i<=N; i = i + 5){
    sum = sum + i;
}
printf("The summation of the series is: %d, %d", sum, &sum);

}
