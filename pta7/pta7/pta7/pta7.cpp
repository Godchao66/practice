#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main()
{
	double mile;
	int time;
	double price;
	scanf("%lf %d", &mile, &time);
	if (mile <= 3)
	{
		price = 10;
	}
	else if (mile <= 10 && mile > 3)
	{
		price = 10 + (mile - 3) * 2;
	}
	else
	{
		price = 10 + (10 - 3) * 2 + (mile - 10) * 3;
	}
	price = time / 5 * 2 + price;
	printf("%.0f", price);
	return 0;
}
