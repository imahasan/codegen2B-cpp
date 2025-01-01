#include <stdio.h>
#include <stdlib.h>

void *myMalloc(size_t size)
{
    void *p = malloc(size);
    if (p == NULL) {
        fprintf(stderr, "Error: Out of memory\n");
        exit(1);
    }
    return p;
}

void myFree(void *p)
{
    free(p);
}

int main(int argc, char *argv[])
{
    void *p = myMalloc(10);
    myFree(p);
    return 0;
}
