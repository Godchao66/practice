#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int prime(int p);
int PrimeSum(int m, int n);

int main()
{
	int m, n, p;

	scanf("%d %d", &m, &n);
	printf("Sum of ( ");
	for (p = m; p <= n; p++) {
		if (prime(p) != 0)
			printf("%d ", p);
	}
	printf(") = %d\n", PrimeSum(m, n));

	return 0;
}


int prime(int p)
{
	int i = 1;
	for (i = p - 1; i >= 1; i--)

	{
		if (p % i == 0)
			break;
	}
	if (i == 1)
		return 1;
	else
		return 0;
}



int PrimeSum(int m, int n)
{
	int p = 0;
	int sum = 0;
	for (p = m; p <= n; p++)
	{
		if (prime(p) != 0)
			sum = sum + p;

	}
	return sum;
}