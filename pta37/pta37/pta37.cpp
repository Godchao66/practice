#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXN 10

void sort(int a[], int n);

int main()
{
	int i, n;
	int a[MAXN];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	sort(a, n);

	printf("After sorted the array is:");
	for (i = 0; i < n; i++)
		printf(" %d", a[i]);
	printf("\n");

	return 0;
}

/* 你的代码将被嵌在这里 */
void sort(int a[], int n)
{
	int i, temp, j;
	temp = 0;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] >= a[j])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}