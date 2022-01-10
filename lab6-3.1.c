#include <stdio.h>

int main(void) {

  int n = 1; //silnia
  int x = 1;
  int i = 1;

  printf("Wprowadz liczbe: ");
  scanf("%d", &n);

  while (i <= n)
  {
    x = x * i;
    i++;
  }

  printf("Wynik: %d\n", x);
}