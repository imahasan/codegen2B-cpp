#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        arr[i] = i;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
