//podnies do kwadratu
#include <stdio.h>
#include <math.h>

void podnies_do_kwadratu(int *n)
{
    *n = pow(*n, 2);
}

void wczytaj_liczbe(int *n)
{
    printf("Wpisz liczbę naturalną: \n");
    scanf("%d\n", n);
}

int main()
{
    int liczba;
    wczytaj_liczbe(&liczba);
    podnies_do_kwadratu(&liczba);
    printf("Kwadrat wczytanej liczby to %d\n", liczba);
    return 0;
}
