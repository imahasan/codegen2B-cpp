#include <stdio.h>

int decclare_ptr(void *pointer, int value, int (*if_function)(void *))
{
        if (pointer == NULL) {
                if (if_function != NULL) {
                        if_function(pointer);
                }
                return value;
        }
        return *(int *)pointer;
}

int main()
{
    
    return 0;
}