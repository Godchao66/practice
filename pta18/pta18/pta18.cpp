#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a, b, c, sum;
    scanf("%d", &a);
    for (b = 1; b <= a; b++)
    {
        sum = 0;
        for (c = 1; c < b; c++)
            if (b % c == 0)
                sum += c;
        if (sum == b)
            printf("%d\n", b);
    }
    return 0;
}