#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int N, i = 0, sum = 0;
	scanf("%d", &N);
	while (N != 0)
	{
		sum += N % 10;
		i++;
		N = N / 10;
	}
	printf("%d %d", i, sum);
	return 0;
}