#include <stdio.h>

int main(void) {

  int n = 1; //silnia
  int x = 1;
  int i = 1;

  printf("Wprowadz liczbe: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; ++i)
  {
    x = x * i;
  }

  printf("wynik: %d\n", x);
}