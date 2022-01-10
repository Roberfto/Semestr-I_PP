#include <stdio.h>
#define N 10
int main()
{
int tab[N]={0,1,0,0,1,1,1,0,1,0};
int i;
int p, lp;
printf("Podaj liczbe przesuniec\n");
scanf("%d",&p);
for (i=N-1; i>=0; i--)
{
printf("%d",tab[i]);
}

for (lp=0; lp<p; lp++)
{
for (int i=N-2; i>0; i--)
{
    tab[i]=tab[i-1];
}

}
printf("\n");
for (i=N-1; i>=0; i--)
{
printf("%d",tab[i]);
}


return 0;
}