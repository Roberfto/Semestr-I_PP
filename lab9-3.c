#include <stdio.h>
 
void swap(double *xp, double *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(double arr[], int n)
{
    int i, j, min_idx;
 
   
    for (i = 0; i < n-1; i++)
    {
       
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
    
        swap(&arr[min_idx], &arr[i]);
    }
}
 

void printArray(double arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%.2f ", arr[i]);
    printf("\n");
}
 
int main()
{

    double arr[5]; 

    printf("Wprowadz 5 elementow: ");
    for(int i=0; i<5; i++)
    {
        scanf("%lf", &arr[i]);
    }

    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Posortowana Tablica: ");
    printArray(arr, n);
    return 0;
}