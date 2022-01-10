#include <stdio.h>

int main(void) {

    int lw, pw = 0;
    int xy = 1;

    printf("wprowadz liczbe kolumn: ");
    scanf("%d", & lw);

    printf("wprowadz liczbe  wierszy: ");
    scanf("%d", & pw);

    for (int i = 1; i <= lw; i++) 
    {
        for (int j = 1; j <= pw; j++) 
        {
            if (xy == 1) 
            {
                printf("x ");
            } 
            else 
            {
                printf("y ");
            }

            xy *= -1;
        }

        if (pw % 2 == 0) 
        {
            xy *= -1;
        }

        printf("\n");
    }

    return 0;
}