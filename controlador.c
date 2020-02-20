#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "modelo.h"
#include "vista.h"


int main()
{
    FILE *archivo;
    archivo = fopen("Graf.dat","wt");
    FILE *archivo1;
    archivo1 = fopen("Graf1.dat","wt");
    int subsN, subsH; 
    float deltha, fin, Nn, Hn, i;
    system("clear");

    vista(&subsN, &subsH, &deltha, &fin);
    Nn= subsN;
	Hn= subsH;

    for(i=deltha ; i<= fin ; i=i+ deltha)
	{
        modelo(&subsN, &subsH, &deltha, &fin, &Nn, &Hn);
        printf(" %f       %f\n\n", Nn, Hn);
        fprintf(archivo," %f\t%f\n", i,Nn);
        fprintf(archivo1," %f\t%f\n", i,Hn);
    }


    getchar();
  
    fclose(archivo);
    fclose(archivo1);
    return 0;
    
}
