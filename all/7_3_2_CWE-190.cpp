#include <stdio.h>

int sum(int a[], int b[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i] + b[i];
    }
    return sum;
}

int main()
{
    
    return 0;
}