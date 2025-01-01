#include <stdio.h>
#include <cstdint>

void *mem_block_get_ptr(void *ptr, size_t size)
{
        if (ptr == NULL)
                return NULL;

        if (size == 0)
                return NULL;

        if (size > 0)
                return (void *) (((uint8_t *) ptr) + size - 1);

        return ptr;
}

int main()
{
    
    return 0;
}