#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int     n;
    int Grade;
    int A_Number = 0, B_Number = 0, C_Number = 0, D_Number = 0, E_Number = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &Grade);
        int Type;
        Type = Grade / 10;
        switch (Type)
        {
        case 10:
        case 9:
            A_Number = A_Number + 1;
            break;
        case 8:
            B_Number++;
            break;
        case 7:
            C_Number++;
            break;
        case 6:
            D_Number++;
            break;
        default:
            E_Number++;
            break;
        }
    }
    printf("%d %d %d %d %d", A_Number, B_Number, C_Number, D_Number, E_Number);

    return 0;

}
