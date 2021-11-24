#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[2];
    char s[1000];
    gets(ch);//scanf和gets不能同时使用
    gets(s);
    int i, k = 0, flag = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == ch[0])//ch[0]即为要搜寻的字母
        {
            flag = 1;
            if (i >= k)
            {
                k = i;
            }
        }
    }
    if (flag)
    {
        printf("index = %d\n", k);
    }
    else
    {
        printf("Not Found\n");
    }
    return 0;
}

