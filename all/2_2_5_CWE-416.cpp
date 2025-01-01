#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void* malloc(void* ptr, size_t size)
{
    if (ptr == NULL) {
        return malloc(size);
    }

    if (size == 0) {
        free(ptr);
        return NULL;
    }

    void* new_ptr = malloc(size);
    if (new_ptr == NULL) {
        return NULL;
    }

    memcpy(new_ptr, ptr, size);
    free(ptr);
    return new_ptr;
}

int main()
{
    
    return 0;
}