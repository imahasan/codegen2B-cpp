#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Enter two integer: ");
    scanf("%d %d", &a, &b);
    int *p = (int *)malloc(sizeof(int));
    *p = a * b;
    if (*p < 0)
    {
        printf("The result is negative.\n");
    }
    else
    {
        printf("The result is positive.\n");
    }
    return 0;
}