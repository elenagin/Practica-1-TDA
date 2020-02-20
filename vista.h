void vista(int *subsN, int *subsH, float *deltha, float *fin )
{
	int i;
	printf("Bienvenido al sistema de prediccion\n");
	printf("------------------------------------\n");
	printf("    Pulsa enter para comenzar\n");
	printf("Inserta tus condiciones iniciales para cada plataforma\n\n");
	printf("Netflix N(0):  ");
	scanf("%d", subsN);
	printf("\nHulu H(0):   ");
	scanf("%d", subsH);
	system("clear");
	printf("Inserta como sera el cambio en el tiempo\n");
	scanf("%f", deltha);
	system("clear");
	printf("Inserta el coeficiente que indica hasta cuando se hara el calculo\n");
	scanf("%f", fin);
	system("clear");
}
