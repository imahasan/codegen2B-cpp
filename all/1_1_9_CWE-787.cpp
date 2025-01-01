#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *src = "Hello World";
    char *dst = (char *)malloc(strlen(src) + 1);

    if (dst == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    memcpy(dst, src, strlen(src) + 1);

    printf("%s\n", dst);

    free(dst);

    return 0;
}