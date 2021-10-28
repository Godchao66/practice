#define  _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void) {
    int A, B, sum = 0, cnt = 0;
    scanf("%d %d", &A, &B);

    do {
        printf("%5d", A);
        sum += A;
        A++;
        cnt++;
        if (5 == cnt && A <= B) {
            cnt = 0;
            printf("\n");
        }

    } while (A <= B);
    printf("\n");

    printf("Sum = %d", sum);

    return 0;
}
