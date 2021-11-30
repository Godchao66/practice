#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[1000], b[1000] = { 0 }, n, i, j, max, flag = 1;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (a[j] == a[i])
			{
				b[j]++;
				break;
			}
		}
		b[i]++;
	}
	max = b[0];
	for (i = 0; i < n; i++)
	{
		if (max < b[i]) { max = b[i]; j = i; flag = 0; }
	}
	if (flag) j = 0;
	printf("%d %d\n", a[j], max);
	return 0;
}
