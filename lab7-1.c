#include <stdio.h>

int main()
{
    int lw, pw = 0;

    printf("wprowadz liczbe powtorzen: ");
    scanf("%d", &lw);

    printf("wprowadz liczbe powtorzen: ");
    scanf("%d", &pw);

    int liczba = 0;

    if (lw < 21 && pw < 21) 
    {
        for(int i=1; i <=lw ; i++ )
        {
            for( int j=1; j <=pw; j++) 
            {
                liczba = i*j;
                printf("%d\t", liczba);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Max!");
    }
    return 0;
}