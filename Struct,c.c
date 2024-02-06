#include <stdio.h>
#include <string.h>

#define input(x) printf("%d", x);


struct Student{
    char name[20];
    char major[50];
    int age;
    double GPA;
};


int main()
{
    int i;
    char n[20], m[20];
    for(i = 1; i <= 5; i++)
    {
        struct Student student[i];
        printf("Enter students name, major, age and GPA\n");

        printf("->");
        scanf("%s", n);
        printf("NAME: %s", n);



        strcpy( student[i].name, n);
        strcpy( student[i].major, m);
        student[i].GPA = 4.00;
        student[i].age = 20;





    }





    return 0;
}
