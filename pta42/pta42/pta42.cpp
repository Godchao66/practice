#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[2];
    char s[1000];
    gets(ch);//scanf��gets����ͬʱʹ��
    gets(s);
    int i, k = 0, flag = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == ch[0])//ch[0]��ΪҪ��Ѱ����ĸ
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

