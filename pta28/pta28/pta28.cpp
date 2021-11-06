#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	if (n == 1)
		return 1;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 1;
	}
	return 0;
}
int main()
{
	int m, temp = 0;
	scanf("%d", &m);
	for (int i = m - 1; temp < 10; i--) {
		if (isPrime(i) == 0)
		{
			temp++;
			printf("%6d", i);
		}
	}
	return 0;
}

