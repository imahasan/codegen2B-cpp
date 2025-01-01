#include <stdio.h>
#include <stdlib.h>

void* multiply(int n1, int n2)
{
    int *result = (int*)malloc(sizeof(int));
    *result = n1 * n2;
    return result;
}

int main()
{
    
    return 0;
}