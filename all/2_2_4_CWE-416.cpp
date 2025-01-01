#include <stdio.h>
#include <stdlib.h>

void *malloc_ptr(size_t size)
{
    void *ptr;

    ptr = malloc(size);
    if (ptr == NULL) {
        fprintf(stderr, "malloc_ptr: malloc failed\n");
        exit(1);
    }
    return ptr;
}

int main()
{
    
    return 0;
}