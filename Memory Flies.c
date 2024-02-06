#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *file = fopen("Employees.txt", "a");


    /*fprintf(file, "HI..This is protik\nThis my first created file. So i am kinda happy you can say. I created this file with C programming. Learning as much as i can. and wanna learn more.\n\n SO YEAH... Lets see how much i can go");*/

    fprintf(file, "\nTrying to write some line");



    fclose(file);


    getch();
}
