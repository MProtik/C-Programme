#include<stdio.h>

recursion(int n){
    if(n>0){
        recursion(n-2);
        printf("%i\n", n);
    }

}
int main(){
recursion(5);
return 0;
}
