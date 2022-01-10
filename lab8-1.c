#include <stdio.h>

int main(void) {
  
  int tab1[5] = { 98475, 29038, 23425, 12354, 12334 };
  int tab2[5] = { 0475, 0203, 023425, 012354, 012334 };
  int tab3[5] = {0x98475, 0x29038,0x23425,0x12354,0x12334 };

  printf("tab1\n");
  for(int i = 0; i < 5; i++)
  {
      printf("%f\n", (float)tab1[i]);
  }
   
  printf("\n");
  
  printf("tab2\n");
  for(int i = 0; i < 5; i++)
  {
      printf("%o\n", tab2[i]);
  }

  printf("\n");
  
  printf("tab3\n");
  for(int i = 0; i < 5; i++)
  {
      printf("%X\n", tab3[i]);
  }

  printf("\n");

  return 0;
}