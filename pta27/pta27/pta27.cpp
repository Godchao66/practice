#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int x = 100, y = 150;
    int count = 0;
    for (int i = 1; i < (y - 2 - 1) / 5; i++) {
        for (int j = 46; j > 0; j--) {
            for (int k = 53; k < (x - 2) - 5 - 2; k++) {
                if (5 * i + 2 * j + k == y) {
                    if (i + j + k == x) {
                        printf("%d %d %d\n", i, j, k);
                        count++;
                        if (count == n)
                            goto out;
                        break;
                    }
                }
            }
        }
    }
out:
    return 0;
}
