#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *p = (char *)malloc(sizeof(char));
    *p = 'a';
    printf("%s\n", p);
    free(p);
    return 0;
}