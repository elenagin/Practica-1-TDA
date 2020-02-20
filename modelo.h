void modelo(int *subsN, int *subsH, float *deltha, float *fin, float *Nn, float *Hn)
{
	float Nt, Ht;
	float i;

	

	//printf("%f        %f\", *Nn, *Hn);
	
		Nt = *Nn + *deltha * (2.5 * *Nn - 5.4 * *Hn);
	    Ht = *Hn + *deltha * (5.4 * *Hn - 5.4 * *Nn);
		
		*Nn= Nt;
		*Hn= Ht;

		//printf("  %f       %f         %f\n ",i, *Nn, *Hn);

	

	//printf("%f\n", Nt);
	//printf("%f\n", Ht);
}
