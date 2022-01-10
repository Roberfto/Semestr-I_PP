#include <stdio.h>  
  
int main()  
{  
    int arr[6]; 
    int i;  
    printf("Wprowadz Elementy Tablicy :\n");  
    for(i=0; i<6; i++)  
    {  
	    printf("Elenent - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\n Elementy tablicy: ");  
    for(i=0; i<6; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    printf("\n");	
}