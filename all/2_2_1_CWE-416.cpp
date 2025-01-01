#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int main(int argc, char *argv[])
{
    char *buffer = (char *)malloc(MAX_SIZE);
    int i;
    int size = 0;
    int size_max = MAX_SIZE;

    if (buffer == NULL) {
        printf("Error: malloc() failed\n");
        return 1;
    }

    printf("Enter a string of characters:\n");
    for (i = 0; i < size_max; i++) {
        scanf("%c", &buffer[i]);
        if (buffer[i] == '\n') {
            break;
        }
    }

    printf("The string is: %s\n", buffer);

    free(buffer);

    return 0;
}