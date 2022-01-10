#include <stdio.h>
#include <math.h>
// n = 5, 6, 7, 8

int main()
{
    int n = 0;
    float x = 1.0f;
    float sum = 1.0f;

    printf("Podaj n: ");
    scanf("%d", &n);
  
    printf("Podaj x: ");
    scanf("%f", &x);

    for (int i = n - 1; i > 0; --i )
        sum = 1 + x * sum / i;

    printf("Wynik: %f\n", sum);

    return 0;
}