#include <stdio.h>
main(){
    int a, b;
    printf("Enter a value: ");
    scanf("%d", &a);
    printf("Enter b value: ");
    scanf("%d", &b);


    switch(a){
        case 10:

        switch(b){
        case 20:
        printf("True");
        break;
        }

        default:
        printf("False");
        break;
    }

    return 0;
}
