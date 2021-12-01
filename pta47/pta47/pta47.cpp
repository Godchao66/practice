#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    char c[100] = { 0 };
    char ch;
    int i, len = 0, n = 0, s = 0;
    int b[100] = { 0 };
    ch = getchar();
    for (i = 0; ch != '\n'; i++) {
        c[i] = ch;
        len++;
        ch = getchar();
    }
    for (i = 0; i <= len; i++) {
        if (c[i] >= '0' && c[i] <= '9') {
            b[n] = c[i] - '0';
            n++;
        }
    }
    for (i = 0; i < n; i++) {
        s = s * 10 + b[i];
    }
    printf("%d", s);
    return 0;
}
