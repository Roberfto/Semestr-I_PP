#include <stdio.h>  
   
int main()  
{  
    double rows, cols, sumRow, sumCol;    
 
    double arr1[5][5]={
      {1,2,3,4,5},
      {9,8,7,6,4},
      {1,3,5,6,7},
      {1,1,1,1,1},
      {2,2,2,2,2}

    };
  
    rows = (sizeof(arr1)/sizeof(arr1[5]));  
    cols = (sizeof(arr1)/sizeof(arr1[5][5]))/rows;  
      
 
    for(int i = 0; i < rows; i++){  
        sumRow = 0;  
        for(int j = 0; j < cols; j++){  
          sumRow =( sumRow + arr1[i][j]/(5));  
        }  
        printf("Srednia z %d wiersza: %.2f\n", (i+1), sumRow);  
    }  
      
  
    for(int i = 0; i < cols; i++){  
        sumCol = 0;  
        for(int j = 0; j < rows; j++){  
          sumCol =( sumCol + arr1[j][i]/(5));  
        }  
        printf("Srednia z  %d kolumny: %.2f\n", (i+1), sumCol);  
    }  


          
    return 0;  
}  