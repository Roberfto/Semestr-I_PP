#include <stdio.h>  
  
int main()  
{  
    int arr[6]; 
    int i;  

    int sum_p = 0;
    int sum_np = 0;

    printf("Wprowadz liczbe :\n");  
    for(i=0; i<6; i++)  
    {  
	    printf("elenent - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\n");
    for(i=0; i<6; i++)  
    {  
        if (arr[i] % 2 == 0)
        {
            sum_p = sum_p + arr[i];
        } 
        else
        {
            sum_np = sum_np + arr[i];
        }
    } 

    printf("Sum Parzyste: %d\n", sum_p);
    printf("Sum Nie Parzyste: %d\n", sum_np);

    printf("\n");	
}
