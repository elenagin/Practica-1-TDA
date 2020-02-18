#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#include "modelo.h"
#include "vista.h"

int main()
{
    int subsN, subsH; 
    float deltha, fin;
    system("clear");

    vista(&subsN, &subsH, &deltha, &fin);

    printf("%d\n %d\n %f\n %f\n", subsN, subsH, deltha, fin);

    char input[50];
    int length;

    

    getchar();
    //system("clear");
    return 0;
}
