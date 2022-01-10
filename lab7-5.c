#include <stdio.h>
int main() {
    int x, oliczba, z, wynik = 0;
    printf("Wprowadz liczbe: ");
    scanf("%d", &x);
    oliczba = x;

    while (oliczba != 0) {
       
        z = oliczba % 10;
        
       wynik += z * z * z;
        
       
       oliczba /= 10;
    }

    if (wynik == x)
        printf("%d Jest liczba Amstronga.", x);
    else
        printf("%d Nie jest liczba Amstronga.", x);

    return 0;
}