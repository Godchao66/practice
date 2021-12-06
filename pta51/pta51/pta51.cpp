#define  _CRT_SECURE_NO_WARNINGS
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
void delnum(char* s)
{
    int i = 0;
    int j = 0;

    while (s[i] != '\0')
    {
        if (s[i] > '9' || s[i] < '0')
        {
            //i = ++j;
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] = '\0';
}
//a0bc + d496df