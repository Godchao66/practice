#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double mypow(double x, int n);

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
#include <math.h>
double mypow(double x, int n)
{
    return pow(x, n);
}