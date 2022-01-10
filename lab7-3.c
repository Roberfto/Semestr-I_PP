#include <stdio.h>

int main(void) 
{
  int n = 0;
  double i, sum = 0.0;

  printf("Liczba: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) 
  {
    sum = sum + 1 / i;
  }

  printf("Wynik: %f\n", sum);

  return 0;
}