#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c, n, t = 0;
	scanf("%d %d %d", &a, &b, &c);
	n = a;
	while (n > 0)
	{
		if (t % 2 == 0)
		{
			n -= b;
			t++;
		}
		else
		{
			n += c;
			t++;
		}
	}
	printf("%d", t);
	return 0;
}
