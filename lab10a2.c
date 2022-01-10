#include <stdio.h>

int main()
{
int tab[3][3];

int w, k;

printf("\n tablica 3x3 :\n");
printf("Wprowadz elementy tablicy: \n");
for (w=0; w<3; w++)
{
for (k=0; k<3; k++)
{
printf("Podaj element %d,%d \n", w ,k);
scanf("%d", &tab[w][k]);

}
}


printf("\n tablica 3x3\n");

for (w=0; w<3; w++)
{
printf("\n");
for (k=0; k<3; k++)
{
printf(" %d ",tab[w][k]);
}
}

printf("\nPodaj wiersz: ");
scanf("%d", &w);
printf("Podaj kolumne: ");
scanf("%d", &k);
printf("podaj wartosc elementu: ");
scanf("%d", &tab[w][k]);



for (w=0; w<3; w++)
{
printf("\n");
for (k=0; k<3; k++)
{
printf(" %d ",tab[w][k]);
}
}
return 0;
}
