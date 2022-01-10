#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void sort(int arr[], int n)
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

void randomArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
        arr[i]=rand()%10;
}

void merge(int merged[], int arr1[], int arr2[], int arr1size, int arr2size, int arr3size)
{
    for(int i = 0; i < arr1size; i++)
  	{
      	merged[i] = arr1[i];
  	}
 	  
    for(int i = 0, j = arr1size; j < arr3size && i < arr2size; i++, j++)
  	{
  		  merged[j] = arr2[i];
  	}
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
 
    printf("\n");
}

int main()
{
    int arr1[2048];
    int arr1len;
 
    int arr2[2048];
    int arr2len;
    
    int arr3[2048];

    printf("Rozmiar Tablicy 1: ");
    scanf("%d", &arr1len);

    randomArray(arr1, arr1len);

    printf("Pierwsza Tablica: ");
    printArray(arr1, arr1len);

    printf("\n");

    printf("Rozmiar Tablicy 2: ");
    scanf("%d", &arr2len);
    
    randomArray(arr2, arr2len);

    printf("Druga Tablica: ");
    printArray(arr2, arr2len);    

    printf("\n");

    int arr3len = (arr1len + arr2len);

    merge(arr3, arr1, arr2, arr1len, arr2len, arr3len);

    sort(arr3, arr3len);

    printf("Wynik: ");

    printArray(arr3, arr3len);
  
    return 0;
}