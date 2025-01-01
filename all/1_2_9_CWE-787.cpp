#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *p1 = (char *)malloc(10);
    char *p2 = (char *)malloc(10);
    memcpy(p1, p2, 10);
    free(p1);
    free(p2);
}