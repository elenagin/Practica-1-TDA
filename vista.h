#include <stdlib.h>

void vista(float *c1_netflix, float *c2_netflix, float *c3_netflix, float *c4_netflix, float *c5_netflix,
		   float *c1_hulu, float *c2_hulu, float *c3_hulu, float *c4_hulu, float *c5_hulu, float *delta, long *max)
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
	printf("\nN E T F L I X\nCondición 1: ");
	scanf(" %f", c1_netflix);
	printf("Condición 2: ");
	scanf(" %f", c2_netflix);
	printf("Condición 3: ");
	scanf(" %f", c3_netflix);
	printf("Condición 4: ");
	scanf(" %f", c4_netflix);
	printf("Condición 5: ");
	scanf(" %f", c5_netflix);
	getchar();
	system("clear");
	printf("H U L U\nCondición 1: ");
	scanf(" %f", c1_hulu);
	printf("Condición 2: ");
	scanf(" %f", c2_hulu);
	printf("Condición 3: ");
	scanf(" %f", c3_hulu);
	printf("Condición 4: ");
	scanf(" %f", c4_hulu);
	printf("Condición 5: ");
	scanf(" %f", c5_hulu);
	printf("Presione enter para continuar\n");
	getchar();
	system("clear");
	printf("Inserte ∆t: ");
	scanf(" %f", delta);
	printf("Inserte la población máxima: ");
	scanf(" %ld", max);
	system("clear");
}
