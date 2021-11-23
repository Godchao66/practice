
#include <stdio.h>
void delnum(char* s)
{
    int i = 0;
    int j = 0;
    while (s[i] != '\0') {
        if (s[i] > '9' || s[i] < '0')
            s[j++] = s[i];//是表达式先用，再进行j+1操作；
        i++;
    }
    s[j] = '\0';
}
#include "stdio.h"
void delnum(char* s);
int main()
{
    char item[80];
    gets_s(item);
    delnum(item);
    printf("%s\n", item);
    return 0;
}

/* 请在这里填写答案 */