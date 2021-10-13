#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main(void)
{
	int lower, upper; float c;
	scanf("%d%d", &lower, &upper);

	if (upper < lower || upper>100)printf("Invalid.");
	else {
		printf("fahr celsius\n");
		for (; lower <= upper; lower += 2) {
			c = 5 * (lower - 32) / 9.0;
			printf("%d%6.1f\n", lower, c);
		}
	}
}
