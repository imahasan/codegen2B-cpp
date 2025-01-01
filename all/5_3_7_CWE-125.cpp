#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i, j, k, n, m, size, *arr;
    char *str;

    if (argc != 2) {
        printf("Usage: %s <size>\n", argv[0]);
        return 0;
    }

    size = atoi(argv[1]);
    arr = (int *)malloc(sizeof(int) * size);
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    str = (char *)malloc(sizeof(char) * size);
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    for (i = 0; i < size; i++) {
        arr[i] = i;
        str[i] = '\0';
    }

    printf("%s\n", str);
    printf("%d\n", size);

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            for (k = 0; k < size; k++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        printf("\n");
    }

    free(str);
    free(arr);

    return 0;
}
