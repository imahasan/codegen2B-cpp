#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

int main(int argc, char *argv[])
{
    char *buffer = NULL;
    int size = 0;
    int i = 0;

    if (argc < 2) {
        printf("Usage: %s <size>\n", argv[0]);
        return 1;
    }

    size = atoi(argv[1]);

    if (size <= 0) {
        printf("Invalid size: %d\n", size);
        return 1;
    }

    buffer = (char *)malloc(size);
    if (buffer == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < size; i++) {
        buffer[i] = 'a';
    }

    free(buffer);

    return 0;
}