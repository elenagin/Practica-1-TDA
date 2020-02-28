#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "modelo.h"
#include "vista.h"


int main()
{
    FILE *archivo;
    archivo = fopen("Netflix.dat","wt");
    FILE *archivo1;
    archivo1 = fopen("Hulu.dat","wt");
    float subsN, subsH; 
    float deltha, fin, Nn, Hn, i;
    float pob_max = 6 * pow(10, 9);
    system("clear");

    vista(&subsN, &subsH, &deltha, &fin);
    Nn= subsN;
	Hn= subsH;

    for(i=deltha ; i<= fin ; i=i+ deltha)
	{
        modelo(&deltha, &fin, &Nn, &Hn);
        printf(" %f       %f\n\n", Nn, Hn);
        fprintf(archivo," %f\t%f\n", i,Nn);
        fprintf(archivo1," %f\t%f\n", i,Hn);
        if(Nn >= pob_max && Hn >= pob_max)
        {
            break;  
		}
    }


    getchar();
  
    fclose(archivo);
    fclose(archivo1);
    return 0;
    
}
