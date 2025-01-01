#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_SIZE 100

int main(int argc, char *argv[]) {
    int size = MAX_SIZE;
    int *arr = (int *)malloc(sizeof(int) * size);
    int i;
    for (i = 0; i < size; i++) {
        arr[i] = i;
    }
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
