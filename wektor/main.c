#include "include/header.h"

int main(void)
{
    wektor *wek = malloc (sizeof (wektor));
    init_wektor(wek);

    int j = 0;
    int i = 0;
    double temp;

    for (i = 0; i < 12; i++)
    {
        if (i % 5 == 0 && i != 0)
        {
            for (j = i - 5; j < i; j++)
                printf("%d\t%lf\n", j + 1, at(wek, j));
        }
        printf("Podaj %d liczbę:\t", i + 1);
        scanf("%lf", &temp);
        push(wek, temp);
    }

    for (i = 0; i < 12; i++)
        printf("%d\t%lf\n", i +1, at(wek, i));

    printf ("Aktualna wielkość tablicy: %d\n", wek->rozmiar);
    printf ("Aktualna pozycja: %d\n", size(wek));

    for (i = 0; i < 12; i++)
        printf("%d\t%lf\n", i +1, pop(wek));

    printf ("Aktualna wielkość tablicy: %d\n", wek->rozmiar);
    printf ("Aktualna pozycja: %d\n", size(wek));

    free(wek->tablica);
    free(wek);
    return 0;
}

