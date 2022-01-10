#include<stdio.h> 
int main() 
 { 
   int a[4],b[4],i,tmp; 
   printf("Wprowadz Elementy Tablicy 1 :\n");  
    for(i=0; i<4; i++)  
    {  
	    printf("Elenent - %d : ",i);
        scanf("%d", &a[i]);  
    }  
   printf("Wprowadz Elementy Tablicy 2 :\n");  
    for(i=0; i<4; i++)  
    {  
	    printf("Elenent - %d : ",i);
        scanf("%d", &b[i]);  
    }  
    for (i=0; i<4; i++)
    {
      tmp = a[i];
      a[i] = b[i];
      b[i]= tmp;
    }
   printf("Elementy Tablicy 1 :\n");  
    for(i=0; i<4; i++)  
    {  
	    printf("Elenent - %d \n",a[i]);  
    }  
   printf("Wprowadz Elementy Tablicy 2 :\n");  
    for(i=0; i<4; i++)  
    {  
	    printf("Elenent - %d \n ",b[i]);  
    }  
 }



 