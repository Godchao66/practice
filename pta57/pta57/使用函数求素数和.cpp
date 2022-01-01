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

/* ��Ĵ��뽫��Ƕ������ */
int prime(int p)
{
	int i, j;
	if (p <= 1) {
		return 0;
	}
	else if (p == 2)
	{
		return 1;
	}
	else {

		for (i = 2; i < p; i++)
		{
			if (p % i == 0)
				break;
		}
		if (i == p) {
			return 1;
		}
		else return 0;
	}
}
int PrimeSum(int m, int n)
{
	int i = m, sum = 0;
	for (; i <= n; i++)
	{
		if (prime(i) == 1) {
			sum += i;
		}
	}
	return sum;


}
