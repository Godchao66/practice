#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double n;
	scanf("%lf", &n);
	double sum=0;
	int i = 1;
	for (; i <= n; i++)
	{
		sum = (double)1 / i + sum;

	}
	printf("sum = %.6lf", sum);
	return 0;
}