#include <stdio.h>

int matrixMal(int matrix1[], int matrix2[]){
int i, j, c;
int matrix3[9];
for(i = 0; i<3; i++){
    for(j = 0; j<3; j++){
    matrix3[c] = matrix1[c] + matrix2[j*c+2];
    c++;
    }
}
return matrix3;
}

int main(){
int i, j, iteration, x;
int matrix1[9], matrix2[9], matrix3[9];
printf("Insert the element of first matrix");
for(i = 0; i<3 ; i++){
    for(j = 0; j<3 ; j++){
        x++;
        printf("\n(%i, %i)->", i+1, j+1);
        scanf("%i", &matrix1[x]);
    }
}
getch();
system("cls");
printf("Insert the element of second matrix");
x = 0;
for(i = 0; i<3 ; i++){
    for(j = 0; j<3 ; j++){
        x++;
        printf("\n(%i, %i)->", i+1, j+1);
        scanf("%i", &matrix2[x]);
    }
}
getch();
system("cls");
printf("first matrix:\n");
x =0;
for(i = 0; i<3 ; i++){
    printf("[");
    for(j = 0; j<3 ; j++){
        x++;
        printf("%i ", matrix1[x]);
    }
    printf("]\n");

}
printf("Second matrix:\n");
x =0;
for(i = 0; i<3 ; i++){
    printf("[");
    for(j = 0; j<3 ; j++){
        x++;
        printf("%i ", matrix2[x]);
    }
    printf("]\n");

}

matrix3[9] = matrixMal(matrix1[9], matrix2[9]);
for(i = 0; i<3 ; i++){
    printf("[");
    for(j = 0; j<3 ; j++){
        x++;
        printf("%i ", matrix3[x]);
    }
    printf("]\n");

}
return 0;
}

