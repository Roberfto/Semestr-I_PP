#include <stdio.h>

int main(void)
{
    double arr[8];  
    double n;
    int a1= -1, b1= 5,sumaAB = 0;


    for (int i = 0; i < 8; i++)
    {
        printf("Element %d: ", i);
        scanf("%lf", &n);

        arr[i] = n;
    }
    for (i = 0; i<N; i = i+1){
       if (arr[8]>= a1 && arr[8] <= b1)

       sumaAB = sumaAB+arr[8];
        printf("\n Suma elementow z przedzialu [%d, %d=] \
        sumaAB=%d",a1,b1,sumaAB);
    }

    

    printf("\n");


    return 0;
}