#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a, b;
    char c;
    scanf("%d %c %d", &a, &c, &b);
    switch (c)
    {
    case'+':
        printf("%d\n", a + b);
        break;
    case'-':
        printf("%d\n", a - b);
        break;
    case'*':
        printf("%d\n", a * b);
        break;
    case'/':
        printf("%d\n", a / b);
        break;
    case'%':
        printf("%d\n", a % b);
        break;
    default:
        printf("ERROR");
    }
    return 0;
}