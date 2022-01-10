#include<stdio.h>
void rvereseArray(int arr[], int start, int koniec)
{
    int temp;
    while (start < koniec)
    {
        temp = arr[start];  
        arr[start] = arr[koniec];
        arr[koniec] = temp;
        start++;
        koniec--;
    }  
}    
 
void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
 
  printf("\n");
}
 
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
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    rvereseArray(arr, 0, n-1);
    printf("Odwrotna Tablica : \n");
    printArray(arr, n);   
    return 0;
}