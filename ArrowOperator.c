#include<stdio.h>
#include <string.h>


struct student{
    char name[15];
    int id;

}protik;
int main(){
    strcpy(protik.name, "Protik");
    protik.id = 141;
    //printf("Name = %s\nID = %i\n", protik.name, protik.id);
    struct student *ptr;
    ptr = &protik;
    int *ptr2;


    protik.id = 242;
    ptr2 = &protik.id;
    printf("1st Pointer : %i and 2nd Pointer : %i", ptr, ptr->id);

    return 0;
}
