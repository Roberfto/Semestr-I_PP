#include <stdio.h>

int main(void) {

    int lw = 0;
    int j;

    printf("wprowadz liczbe powtorzen: ");
    scanf("%d", &lw);

    for(int i=1; i <=lw ; i++ )
    {
        printf("x ");

        for(j=1; j <=i; j++) 
        {
            if (j > 2)
            {
                printf("x ");
            }
        }

        if (j > 2)
        {
            printf("y ");
        }

        printf("\n");
    }

    return 0;
}