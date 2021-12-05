#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define N 80
int main() {
    int n;N
    scanf("%d", &n);
    char string[N], slong[N];
    scanf("%s", string);
    strcpy(slong, string);
    int i;
    for (i = 1; i < n; i++) {
        scanf("%s", string);
        if (strlen(string) > strlen(slong)) {
            strcpy(slong, string);
        }
    }
    printf("The longest is: %s", slong);
    return 0;
}