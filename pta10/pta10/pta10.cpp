#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int x, y;
    char n;
    scanf("%d %c %d", &x, &n, &y);
    switch (n) 
    {

        case'+':
            printf("%d\n", x + y); 
            break;
        case'-':
            printf("%d\n", x - y); 
            break;
        case'*':
            printf("%d\n", x * y); 
            break;
        case'/':
            printf("%d\n", x / y); 
            break;
        case'%':
            printf("%d\n", x % y); 
            break;
        default:
            printf("ERROR");
            break;
    }

}
