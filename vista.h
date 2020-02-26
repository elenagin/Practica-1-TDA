#include <stdlib.h>

void vista(float *c1_netflix, float *c1_hulu, float *delta, long *max, float *u_cuatro_prima)
{
	int i;
	system("clear");
	printf("Bienvenido al sistema de prediccion\n");
	printf("------------------------------------\n");
	printf("   E l e n a   G i n e b r a \n");
	printf("   M a r i a n a   C a r m o n a \n");
	printf("   I v á n   G u z m á n \n");
	printf("------------------------------------\n");
	printf("Presione enter para continuar\n");
	getchar();
	system("clear");
	printf("Inserta tus condiciones iniciales para cada plataforma\n\n");
	printf("\nN E T F L I X\nInserte la población inicial: ");
	scanf(" %f", c1_netflix);
	getchar();
	system("clear");
	printf("H U L U\nInserte la población inicial: ");
	scanf(" %f", c1_hulu);
	printf("Presione enter para continuar\n");
	getchar();
	system("clear");
	printf("Inserte ∆t: ");
	scanf(" %f", delta);
	printf("Inserte el año limite: ");
	scanf(" %ld", max);
	system("clear");
}
