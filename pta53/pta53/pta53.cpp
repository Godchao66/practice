#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int K, N;
    scanf("%d %d ",& N, &K);
    int i;
    int arr[20];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m ,n;
    for (m = 0; m < K; m++)
    {
        for (n = 0; n < N - m - 1; n++)
            if (arr[n] > arr[n + 1])
            {
                int tep = arr[n];
                arr[n] = arr[n + 1];
                arr[n + 1] = tep;
            }
    }

    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}