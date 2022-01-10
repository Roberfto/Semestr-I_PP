#include <stdio.h>

int main(void) {
printf("C     F\n");

float F = 20;
float C = 0;
  while (F >= 20 && F <= 300) {
    C = 5*(F - 32) / 9;
    printf("%.2f %.2f\n", C, F);
    F += 10;
  }
}