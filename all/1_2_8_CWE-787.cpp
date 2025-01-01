#include <stdio.h>

int main()
{
    int array2[10];
    for (int i = 0; i < 10; i++) {
        array2[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");
    
    return 0;
}