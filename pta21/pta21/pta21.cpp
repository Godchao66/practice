#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int peach(int n) {
	if (n == 1)
		return 1;
	else
		return 2 * peach(n - 1) + 2;
}

int main() {

	int n;
	scanf("%d", &n);
	printf("%d\n", peach(n));
	return 0;
}
