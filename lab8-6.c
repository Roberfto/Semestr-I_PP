#include <stdio.h> 
 
int main() 
{ 
    int i,arr[4],sum=0; 
 
    printf("wrowadz :"); 
    for(i=0;i<4;++i) 
        scanf("%d",&arr[i]); 
 
    for(i=0;i<4;++i) 
        sum=sum+arr[i]; 
    printf(":%d",sum); 
 
    return 0; 
} 