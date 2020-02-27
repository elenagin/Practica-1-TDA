#include <stdio.h>
#include <string.h>

#include "modelo.h"
#include "vista.h"

int main()
{
    FILE *archivo1, *archivo2;
    archivo1 = fopen("Netflix.dat", "wt");
    archivo2 = fopen("Hulu.dat", "wt");
    float c1_netflix, c2_netflix, c3_netflix, c4_netflix, c5_netflix;
    float c1_hulu, c2_hulu, c3_hulu, c4_hulu, c5_hulu, u_cuatro_prima;
    float delta, i, Nn, Hn;
    long max;

    vista(&c1_netflix, &c1_hulu, &delta, &max);

    for (i = delta; i <= max; i = i + delta)
    {
        modelo(&delta, &max, &c1_netflix, &c1_hulu);
        printf(" %f       %f\n\n", Nn, Hn);
        fprintf(archivo1, " %f\t%f\n", i, Nn);
        fprintf(archivo2, " %f\t%f\n", i, Hn);
    }

    getchar();

    fclose(archivo1);
    fclose(archivo2);
    return 0;
}
