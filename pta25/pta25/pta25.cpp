#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int count, i = 1;
	for (i = 1;; i++)
	{
		if (i % 5 == 1 && i % 6 == 5 && i % 7 == 4 && i % 11 == 10)
		{

			break;
		}

	}
	printf("%d", i);
	return 0;

}
