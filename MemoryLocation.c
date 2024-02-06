#include <stdio.h>

int main(){
	int age = 30;
	double gpa = 3.4;
	char grade = 'a';
	int * ptrage = &age;
	double *pGpa = &gpa;
	char *aGrade = &grade;

    //printf("pointer: %c\n", grade);
    printf("pointer: %p\n", ptrage);
return 0;
}
