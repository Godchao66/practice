#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double fact(int n);
double factsum(int n);

int main()
{
	int n;

	scanf("%d", &n);
	printf("fact(%d) = %.0f\n", n, fact(n));
	printf("sum = %.0f\n", factsum(n));

	return 0;
}

/* 你的代码将被嵌在这里 */
double fact(int n)
{

	if (n == 1)
		return 1;
	if (n != 1)
		return n * fact(n - 1);


}

double factsum(int n)
{
	double sum = 0.0;
	for (int i = 1; i <= n; i++)
	{
		sum = sum + fact(i);
	}
	return sum;
}
