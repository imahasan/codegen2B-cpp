#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
    int i;
    char *str;

    if (argc < 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    str = argv[1];

    for (i = 0; i < strlen(str); i++) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}