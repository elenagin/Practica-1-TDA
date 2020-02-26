#include <stdio.h>
#include <string.h>

#include "modelo.h"
#include "vista.h"

int main()
{
    FILE *archivo;
    archivo = fopen("Netflix.dat", "wt");
    FILE *archivo1;
    archivo1 = fopen("Hulu.dat", "wt");
    int c1_netflix, c2_netflix, c3_netflix, c4_netflix, c5_netflix;
    int c1_hulu, c2_hulu, c3_hulu, c4_hulu, c5_hulu;
    float delta, i;
    long max;

    vista(&c1_netflix, &c2_netflix, &c3_netflix, &c4_netflix, &c5_netflix,
          &c1_hulu, &c2_hulu, &c3_hulu, &c4_hulu, &c5_hulu, &delta, &max);

    for (i = delta; i <= max; i = i + delta)
    {
        modelo(&delta, &max);
        //printf(" %f       %f\n\n", Nn, Hn);
        //fprintf(archivo, " %f\t%f\n", i, Nn);
        //fprintf(archivo1, " %f\t%f\n", i, Hn);
    }

    getchar();

    fclose(archivo);
    fclose(archivo1);
    return 0;
}
