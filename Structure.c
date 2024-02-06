#include <stdio.h>
#include <string.h>
#include <conio.h>

typedef struct Pub
{
    int id;
    int marks;
    char name[20];
}pub;


void main(){
    struct Pub student2;
    student2.marks = 94;
    pub student3;

    strcpy(student3.name, "Mac");



    //printf("student1 marks =%d & student2 marks =%i\n", student1.marks, student2.marks);
    printf("Student3: %s", student3.name);
}
