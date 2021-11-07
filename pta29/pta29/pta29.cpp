#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0;
	int sum = 0;
	do
	{
		scanf("%d", &a);
		if (a == -1)
		{
			break;
		}
		if(a% 3 == 0 || a % 7 == 0)
		sum = sum + a;
	} while (1);
	printf("%d", sum);

	return 0;


}
