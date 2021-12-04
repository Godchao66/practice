#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char ch;
    char o[81];
    int i, c = 0;
    gets_s(o);
    scanf("%c", &ch);
    for (i = 0; o[i] != '\0'; i++)
    {
        if (o[i] == ch)
        {
            c++;
        }
    }
    printf("%d", c);
    return 0;
}
