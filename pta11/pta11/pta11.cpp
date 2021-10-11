#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    y = x % 5;
    if (y == 1 || y == 2 || y == 3) {
        printf("Fishing in day %d", x);
    }
    if (y == 0 || y == 4) {
        printf("Drying in day %d", x);
    }
    return 0;
}