#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

int main(int argc, char *argv[])
{
    char *str;
    int len;
    int i;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <string>\n", argv[0]);
        exit(1);
    }

    str = argv[1];
    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (isspace(str[i])) {
            str[i] = '\0';
        }
    }

    printf("%s\n", str);

    return 0;
}