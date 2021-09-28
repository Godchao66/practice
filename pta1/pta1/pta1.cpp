#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
    double x, y;
    scanf("%lf", &x);
    if (x > 6)
    {
        y = 5.0 / 27.0 * (x * x + 4.0 * x - 6.0);
    }
    else if (x > 0)
    {
        y = log(16) / log(3) + x;
    }
    else
    {
        y = 23.0 / 7.0 * (fabs(x * x * x + 4));
    }
    printf("%.3lf", y);
    return 0;
}