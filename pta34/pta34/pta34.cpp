#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int x, int y);

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));

    return 0;
}

/* 你的代码将被嵌在这里 */
int gcd(int x, int y)
{
    int m, i;
    if (x < y)
    {
        m = x;
    }
    else if (x >= y)
    {
        m = y;
    }
    for (i = m; i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)

            return i;



    }
}