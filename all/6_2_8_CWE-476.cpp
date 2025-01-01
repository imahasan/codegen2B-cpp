#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int main(int argc, char *argv[])
{
    char *str;
    int size;
    int i;

    if (argc != 2) {
        printf("Usage: %s <string>\n", argv[0]);
        exit(1);
    }

    str = (char *)malloc(MAX_SIZE);
    if (str == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    size = strlen(argv[1]);
    if (size > MAX_SIZE) {
        printf("String is too long\n");
        exit(1);
    }

    for (i = 0; i < size; i++) {
        str[i] = argv[1][i];
    }

    str[size] = '\0';

    printf("%s\n", str);

    free(str);

    return 0;
}