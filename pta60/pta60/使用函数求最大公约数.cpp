#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int x, int y);

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int gcd(int x, int y)
{
	int i, t;
	if (x > y) {
		t = y;
	}
	else t = x;
	for (i = t; i > 0; i--)
	{
		if (x % i == 0 && y % i == 0)
		{
			break;
		}
	}
	return i;
}
