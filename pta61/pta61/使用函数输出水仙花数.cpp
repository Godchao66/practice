#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n)) printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */

#include<math.h>
int narcissistic(int number)
{
	int i, j, t;
	i = 0;
	int a[20];
	j = 0, t = 0;
	int sum = number;
	while (sum != 0)
	{
		a[i] = sum % 10;
		i++;
		sum = sum / 10;
	}
	for (; j < i; j++)
	{
		t = t + pow(a[j], i);
	}
	if (t == number)
	{
		return 1;
	}
	else return 0;
}
void PrintN(int m, int n)
{
	int i;
	for (i = m + 1; i < n; i++)
	{
		if (narcissistic(i))
		{
			printf("%d\n", i);
		}
	}
}
