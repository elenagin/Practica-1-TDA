void vista(float *subsN, float *subsH, float *deltha, float *fin )
{
	int i;
	printf("Bienvenido al sistema de prediccion\n");
	printf("------------------------------------\n");
	printf("    Pulsa enter para comenzar\n");
	//scanf("%d", &i);
	printf("Inserta tus condiciones iniciales para cada plataforma\n\n");
	printf("Netflix N(0):  ");
	scanf("%f", subsN);
	printf("\nHulu H(0):   ");
	scanf("%f", subsH);
	printf("\nInserta como sera el cambio en el tiempo:  ");
	scanf("%f", deltha);
	printf("\nInserta el coeficiente que indica hasta cuando se hara el calculo:   ");
	scanf("%f", fin);
	system("clear");
}
