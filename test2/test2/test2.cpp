#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char ch;
	ch = getchar();

	if ((65 <= ch && ch <= 89) || (97 <= ch && ch <= 121))
	{

		printf("character");
	}

	else if (48 <= ch && ch <= 57)
	{
		printf("digit");
	}
	else
		printf("ERROR");
	return 0;
}