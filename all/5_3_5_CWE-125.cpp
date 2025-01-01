#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, k, n, m, *arr, *arr2;
    char *str;
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    arr2 = (int *)malloc(n * sizeof(int));
    str = (char *)malloc(n * sizeof(char));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%s", str);
        for (j = 0; j < n; j++)
        {
            if (str[j] == '*')
            {
                arr[i] = arr2[j];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
