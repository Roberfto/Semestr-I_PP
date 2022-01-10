#include <stdio.h>

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
 
int findMedian(int a[], int n)
{
    sort(a, n);

    if (n % 2 != 0)
        return (double)a[n / 2];
 
    return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}

int main()
{
     int arr[5]; 

    printf("Wprowadz 5 elementow: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
   
    printf("Mediana: %d\n", findMedian(arr, 5));

    return 0;
}