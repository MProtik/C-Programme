#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter: ");
    scanf("%d", &n);
    i=1;
    while(i<=n)
    {
        sum = sum + i;
    i = i + 1;
    }
    printf("summation: %d", sum);

    return 0;
}
