#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char arr[20];
	int m = 0;
	gets_s(arr);
	
	int n;
	scanf("%d", &n);
	int i = 0;
	char copy[20];
	while (i<n)
	{
		copy[i] = arr[i];
		i++;
	}
	copy[i] = '\0';
	printf("%s", copy);
	return 0;
}