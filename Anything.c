#include <stdio.h>
#include <string.h>
void main(){
    int count, i, j, n=3;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            count += j;
        }
    }
printf("%i", count);
}

