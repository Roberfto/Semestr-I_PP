#include <stdio.h>
#define N 12
int main()
{
int tab[N]={1,8,2,5,7,3,4,6,0,9,1,6};
int zmienna, tmp,i;

for (i=0; i<N; i++)
{
 tab[i]=rand()%100;
}
for (i=0; i<N; i++)
{
printf("%d ",tab[i]);
}


do {
    zmienna=0;
    for ( i=0; i<N-1; i++)
    {
        if(tab[i]<tab[i+1])
        {
            tmp=tab[i];
            tab[i]=tab[i+1];
            tab[i+1]=tmp;
            zmienna=1;
        }
    }


}while (zmienna==1);
printf("\n");
for (i=0; i<N; i++)
{
printf("%d ",tab[i]);
}

return 0;
}