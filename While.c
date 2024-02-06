#include <stdio.h>

#define input(int, add) scanf("%d", &add);
#define output(int, add) printf("%d", add);
#define write(x) printf("x-> ");

main()
{
    int id;

    input(id, id);

    write(id);
    output(id, id);

    getch();

    return 0;
}
