
#include <stdio.h>
 

void nextGreatest(int arr[], int size)
{
  
  int max_from_right =  arr[size-1];
  arr[size-1] = -1;

  for(int i = size-2; i >= 0; i--)
  {
   
    int temp = arr[i];
    arr[i] = max_from_right;
 
    if(max_from_right < temp)
       max_from_right = temp;
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
     printf("\n Elementy tablicy: ");  
    for(i=0; i<6; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
  int size = sizeof(arr)/sizeof(arr[0]);
  nextGreatest (arr, size);
  printf ("Zmodyfikowana tablica : \n");
  printArray (arr, size);
  return (0);
}