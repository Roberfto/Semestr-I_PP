#include <stdio.h>

int main(void)
{   long int n,i,t=9;
	int x =0;
	printf("wprowadz liczbe powtorzen :");
	scanf("%ld",&n);
	for (i=1;i<=n;i++)
	{ x +=t;
	  printf("%ld   ",t);
	  t=t*10+9;
	}
	printf("\n Suma z seri = %d \n",x);
} 
