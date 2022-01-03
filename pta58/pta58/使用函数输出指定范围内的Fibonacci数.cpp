#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int n);
void PrintFN(int m, int n);

int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int fib(int n)
{
	int a[60];
	int i = 2;
	a[0] = 1, a[1] = 1;


	while (i <= n) {
		a[i] = a[i - 1] + a[i - 2];
		i++;
	}
	return a[n - 1];

}
void PrintFN(int m, int n)


{
	int b[200];
	int c[20];
	int j = 0;

	int i;
	b[0] = 1, b[1] = 1;
	for (i = 2; i < 200; i++) {
		b[i] = b[i - 1] + b[i - 2];
	}
	i = 0;
	while (b[i] < m) {
		i++;
	}
	while (b[i] <= n) {
		c[j] = b[i];
		j++;
		i++;
	}
	if (j == 0)
	{
		printf("No Fibonacci number");

	}
	else
		for (i = 0; i < j; i++)
		{

			printf("%d", c[i]);
			if (i < j - 1)
			{
				printf(" ");
			}
		}
}
