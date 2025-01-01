#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int main(void)
{
    char *str;
    int i;

    str = (char *)malloc(MAX_SIZE);
    if (str == NULL)
    {
        printf("Memory allocation error\n");
        return -1;
    }

    for (i = 0; i < MAX_SIZE; i++)
    {
        str[i] = 'a';
    }

    str[MAX_SIZE - 1] = '\0';

    printf("%s\n", str);

    free(str);

    return 0;
}