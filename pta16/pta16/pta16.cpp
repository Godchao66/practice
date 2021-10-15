#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
    int min;
    int n;
    scanf("%d ", &n);
    int num;
    scanf("%d ", &num);


    min = num;
    for (int x = 1; x <= n - 1; x++)
    {
        scanf("%d ", &num);
        if (min > num)
        {
            min = num;
        }

    }

    printf("min = %d", min);
    return 0;
}