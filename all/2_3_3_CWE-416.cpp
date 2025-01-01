#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

#define MAX_SIZE 100

void *malloc(size_t size)
{
    void *p = malloc(size);
    if (p == NULL) {
        printf("malloc error!\n");
        exit(1);
    }
    return p;
}

void free(void *p)
{
    free(p);
}

int main(int argc, char *argv[])
{
    char *p = (char *)malloc(MAX_SIZE);
    if (p == NULL) {
        printf("malloc error!\n");
        exit(1);
    }
    memset(p, 0, MAX_SIZE);
    printf("%s\n", p);
    free(p);
    return 0;
}
