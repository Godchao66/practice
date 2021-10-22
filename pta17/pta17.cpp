#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int year;
	scanf("%d", &year);
	if (year > 2100 || year < 2000) {
		printf("Invalid year!");
	}
	else {
		int i;
		int cnt = 0;
		for (i = 2001; i <= year; i++) {
			if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
				printf("%d\n", i);
				cnt++;
			}
		}
		if (cnt == 0) {
			printf("None");
		}
	}

	return 0;
}
