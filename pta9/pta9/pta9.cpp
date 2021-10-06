
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()

{
    int n;
    double cost;
    scanf("%d", &n);
    if (n >= 0)
    {
        if (n <= 50)
        {
            cost = n * 0.53;
        }
        else
        {
            cost = (50.0 * 0.53 + (n - 50) * 0.58);
        }

        printf("cost = %.2lf", cost);
    }
    else
    {
        printf("Invalid Value!");
    }
    return 0;
}