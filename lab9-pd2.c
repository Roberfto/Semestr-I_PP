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

int main(){
  int arr[5];
  int counter[5];
  int len = 5;
  int i, j;
  
  printf("Elementy Tablicy: ");
  for (i = 0; i < len; i++) {
    scanf("%d", &arr[i]);
    counter[i] = -1;
  }

  sort(arr, len);

  for (i = 0; i < len; i++) {
    
    if (counter[i] == 0) continue;
    
    counter[i] = 1;
    for (j = i + 1; j < len; j++) {
      if(arr[i] == arr[j]) {
        counter[i]++;
        counter[j] = 0;
      }
    }
  }
  
  for (i = 0; i < len; i++) {
    if (counter[i] == 0) continue;
    printf("%d Element %d Wystąpien.\n", arr[i], counter[i]);
  }

  return 0;
}