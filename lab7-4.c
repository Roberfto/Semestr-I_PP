#include <stdio.h>  
int main()
{
  int x, y, z = 0,i;
  printf("wprowadz liczbe: ");
  scanf("%d" ,&x);
  for(i = 1; i < x; i++)  
 {  
   y = x % i;  
   if (y == 0)  
     {  
       z = z + i;  
       }  
  }  
if (z == x)  
   printf( "liczba idelana");
  else    
   printf("liczba nie idelana");
return 0;  
}  


