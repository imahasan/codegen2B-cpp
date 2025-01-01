#include <stdio.h>
#include <stdlib.h>

void *my_malloc(size_t size)
{
    void *p = malloc(size);
    if (p == NULL) {
        fprintf(stderr, "malloc failed\n");
        exit(1);
    }
    return p;
}

void my_free(void *p)
{
    free(p);
}

int main(void)
{
    void *p = my_malloc(10);
    my_free(p);
    return 0;
}