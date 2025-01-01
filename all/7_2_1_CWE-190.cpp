#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_NUM 100

int main()
{
    int num1, num2, num3;
    int sum;
    int i;
    int flag;
    char ch;
    char str[MAX_NUM];
    scanf("%d%d%d", &num1, &num2, &num3);
    sum = num1 + num2 + num3;
    flag = 0;
    for (i = 0; i < MAX_NUM; i++)
    {
        ch = getchar();
        if (ch == '+')
        {
            flag = 1;
        }
        else if (ch == '-')
        {
            flag = 2;
        }
        else if (ch == '*')
        {
            flag = 3;
        }
        else if (ch == '/')
        {
            flag = 4;
        }
        else if (ch == '\n')
        {
            break;
        }
        else
        {
            str[i] = ch;
        }
    }
    if (flag == 1)
    {
        printf("%d\n", num1);
    }
    else if (flag == 2)
    {
        printf("%d\n", num2);
    }
    else if (flag == 3)
    {
        printf("%d\n", num1 * num2);
    }
    else if (flag == 4)
    {
        printf("%d\n", num1 / num2);
    }
    else
    {
        printf("%d\n", sum);
    }
    return 0;
}