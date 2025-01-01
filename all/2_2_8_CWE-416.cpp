#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *AllocateMemory(size_t size)
{
    void *memory = malloc(size);
    if (memory == NULL)
    {
        printf("AllocateMemory: Out of memory!\n");
        exit(1);
    }
    return memory;
}

int main()
{
    
    return 0;
}