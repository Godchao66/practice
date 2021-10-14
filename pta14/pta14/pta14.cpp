#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	unsigned int n = 0;
	scanf("%d",&n);
		int i = 0;
	int x = 0;
		do {
			
			if (i == n)
			{
				x = pow(3, n);
				printf("pow(3,%d) = %d",  i, x);
				break;
			}
			x = pow(3, i);
			printf("pow(3,%d) = %d\n", i, x);
			i++;
			
		} while (i <= n);
		
		
		return 0;
}
