#include <stdio.h>
#include <stdlib.h>

int main()
{

    char line[225];

    FILE *file = fopen("Employees.txt", "r");


    /*fprintf(file, "HI.....This is protik\nThis my first created file. So i am kinda happy you can say. I created this file with C programming. Learning as much as i can. and wanna learn more.\n\n SO YEAH... Lets see how much i can go");*/

    /*fprintf(file, "\nTrying to write some line");*/

    fgets(line, 225, file);
    printf("%s", line);

    fclose(file);


    return 0;
}
