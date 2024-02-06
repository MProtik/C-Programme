#include <stdio.h>
int n = 5;
int fun(int n)
{
    if( n==-1 )
        return 2;
    else
        return 3 + fun(n - 2);
}

void main(){
    printf("%d", fun(n));
}



