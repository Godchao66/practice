#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
int main()
{
    int n;
    char c;
    float h;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        scanf("%c %f", &c, &h);
        getchar();
        if (c == 'F')
            printf("%.2f\n", h * 1.09);
        else
            printf("%.2f\n", h / 1.09);
    }
    return 0;
}


