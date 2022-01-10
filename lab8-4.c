#include <stdio.h>

int main(void)
{
    double arr[8];  
    double n;

    double sum_d = 0.0;
    double sum_u = 0.0;

    for (int i = 0; i < 8; i++)
    {
        printf("Element %d: ", i);
        scanf("%lf", &n);

        arr[i] = n;
    }

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] > 0)
        {
            sum_d = sum_d + arr[i];
        }
        else
        {
            sum_u = sum_u + arr[i];
        }
    }

    printf("\n");

    printf("Wynik Dodatnich: %lf\n", sum_d);
    printf("Wynik Ujemnych: %lf\n", sum_u);

    return 0;
}