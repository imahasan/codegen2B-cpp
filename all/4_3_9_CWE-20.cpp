#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int a, int b)
{
        int sum = a + b;
        if (sum < 0)
        {
                sum = 0;
        }
        return sum;
}

int main(int argc, char *argv[])
{
        int a, b;
        printf("Please input two integer number: ");
        scanf("%d%d", &a, &b);
        printf("The sum is: %d\n", add(a, b));
        return 0;
}