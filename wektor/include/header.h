#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>

#define MAKS_ROZMIAR 5

typedef struct
{
    double *tablica;
    int rozmiar; //aktualny rozmiar, NIE MAKSYMALNY
    int pozycja; //wskazuje na PUSTY element tablicy
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
    if (wek->pozycja == wek->rozmiar) //zwiększ rozmiar tablicy
    {
        wek->rozmiar *= 1.5;
        wek->tablica = realloc(wek->tablica, sizeof(double) * (wek->rozmiar));
    }
    wek->tablica[wek->pozycja++] = t;
}

double pop(wektor *wek)
{
    return wek->tablica[--wek->pozycja];
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
