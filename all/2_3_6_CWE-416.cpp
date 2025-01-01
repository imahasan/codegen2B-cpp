#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int main(int argc, char *argv[])
{
    char *buffer = (char *)malloc(MAX_SIZE);
    if (buffer == NULL) {
        printf("Error: malloc() failed!\n");
        return -1;
    }

    printf("%s\n", buffer);

    free(buffer);

    return 0;
}