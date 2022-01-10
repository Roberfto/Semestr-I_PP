#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
int y=0,i, k=0, n, a;

 do
    {
    printf("Podaj N:\n");
    k=scanf("%d", &n);

    if(k==0) printf("\n blad formatu \n");
    fflush(stdin);
    }
    while(k==0);

for (i=1; i<=n; ++i)

{

 do
    {
    printf("Podaj A:\n");
    k=scanf("%d", &a);

    if(k==0) printf("\n blad formatu \n");
    fflush(stdin);
    }
    while(k==0);

y+=a;


}
printf("\n Suma liczb wynosi = %d\n", y++);

system("PAUSE");
return 0;
}