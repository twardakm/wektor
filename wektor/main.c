#include "include/header.h"

int main(void)
{
    wektor *wek = malloc (sizeof (wektor));
    init_wektor(wek);

    free(wek->tablica);
    free(wek);
    return 0;
}

