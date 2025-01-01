#include <stdio.h>

int *malloc(size_t size);
void free(int *ptr);
void printArray(int *array, size_t size);

int main()
{
    int *array = NULL;
    array = malloc(10);
    printArray(array, 10);
    free(array);
    return 0;
}
