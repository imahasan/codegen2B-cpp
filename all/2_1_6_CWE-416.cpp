#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int main(int argc, char const *argv[]) {
    int i;
    char *buffer = (char *)calloc(MAX_SIZE, sizeof(char));
    if (buffer == NULL) {
        printf("calloc error\n");
        return -1;
    }
    for (i = 0; i < MAX_SIZE; i++) {
        buffer[i] = 'a';
    }
    printf("%s\n", buffer);
    free(buffer);
    return 0;
}