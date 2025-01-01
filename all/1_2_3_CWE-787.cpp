#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b;
    int sum;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("%d + %d = %d\n", a, b, sum);

    return 0;
}