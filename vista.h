#include <stdlib.h>

void vista(int *c1_netflix, int *c2_netflix, int *c3_netflix, int *c4_netflix, int *c5_netflix,
		   int *c1_hulu, int *c2_hulu, int *c3_hulu, int *c4_hulu, int *c5_hulu, float *delta, long *max)
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
	scanf(" %d", c1_netflix);
	printf("Condición 2: ");
	scanf(" %d", c2_netflix);
	printf("Condición 3: ");
	scanf(" %d", c3_netflix);
	printf("Condición 4: ");
	scanf(" %d", c4_netflix);
	printf("Condición 5: ");
	scanf(" %d", c5_netflix);
	getchar();
	system("clear");
	printf("H U L U\nCondición 1: ");
	scanf(" %d", c1_hulu);
	printf("Condición 2: ");
	scanf(" %d", c2_hulu);
	printf("Condición 3: ");
	scanf(" %d", c3_hulu);
	printf("Condición 4: ");
	scanf(" %d", c4_hulu);
	printf("Condición 5: ");
	scanf(" %d", c5_hulu);
	printf("Presione enter para continuar\n");
	getchar();
	system("clear");
	printf("Inserte ∆t: \n");
	scanf(" %f", delta);
	printf("Inserte la población máxima: \n");
	scanf(" %ld", max);
	system("clear");
}
