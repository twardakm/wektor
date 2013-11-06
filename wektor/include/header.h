#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>

#define MAKS_ROZMIAR 10

typedef struct
{
    double *tablica;
    int rozmiar; //aktualny rozmiar, NIE MAKSYMALNY
    int pozycja; //aktualna pozycja
} wektor;

void init_wektor(wektor *wek);
//-----------------------------------------------------------------------
void push(wektor *wek, double t); //wrzucam t na koniec tablicy
double pop(wektor *wek); //odczytuje i usuwa ostatni element
int size(wektor *wek); //zwraca ilość elementów (pozycję)
double at(wektor *wek, int pos); //zwróć element na danej pozycji
//-----------------------------------------------------------------------

void push(wektor *wek, double t)
{
    if (++pozycja == rozmiar) //zwiększ rozmiar tablicy
        wek->tablica = realloc(w->tablica, (int)(rozmiar * 1.5));
}

double pop(wektor *wek)
{
    return wek->tablica[pozycja--];
}

void init_wektor(wektor *wek)
{
    wek->rozmiar = MAKS_ROZMIAR;
    wek->tablica = malloc(sizeof (double) * wek->rozmiar);
    wek->pozycja = 0;

    return;
}

int size(wektor *wek)
{
    return wek->pozycja;
}

double at(wektor *wek, int pos)
{
    return wek->tablica[pos];
}

#endif // HEADER_H
