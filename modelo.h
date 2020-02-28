#include <math.h>

void modelo(float *deltha, float *fin, float *c1_netflix, float *c1_hulu)
{
	float pob_max = 6 * pow(10, 9);
	float Nt, Ht;
	float i;
	float alfa_uno_netflix, alfa_dos_netflix, alfa_tres_netflix, alfa_cuatro_netflix, alfa_cinco_netflix;
	float alfa_uno_hulu, alfa_dos_hulu, alfa_tres_hulu, alfa_cuatro_hulu, alfa_cinco_hulu;
	float ec_final_netflix, ec_final_hulu;
	float u_cinco, u_cuatro, u_tres, u_dos, u_uno;
	//printf("%f", pob_max);
	
	alfa_uno_netflix = 2.59;
	alfa_dos_netflix = -0.36;
	alfa_tres_netflix = 0.02;
	alfa_cuatro_netflix = -0.26;
	alfa_cinco_netflix = -0.28;

	alfa_uno_hulu = 1.22;
	alfa_dos_hulu = 0.15;
	alfa_tres_hulu = -0.11;
	alfa_cuatro_hulu = -0.24;
	alfa_cinco_hulu = -0.41;

	u_uno = *c1_netflix;
	u_dos = u_uno + (*deltha * *c1_netflix);
	u_tres = u_dos + (*deltha * u_uno);
	u_cuatro = u_tres + (*deltha * u_dos);
	u_cinco = u_cuatro + (*deltha * u_tres);
		
	ec_final_netflix = pob_max - (alfa_cinco_netflix * u_cinco) - (alfa_cuatro_netflix * u_cuatro) - (alfa_tres_netflix * u_tres) - (alfa_dos_netflix * u_dos) - (alfa_uno_netflix * u_uno);
	Nt = *c1_netflix + *deltha * (ec_final_netflix);
	*c1_netflix = Nt;
	
	u_uno = *c1_hulu;
	u_dos = u_uno + (*deltha * *c1_hulu);
	u_tres = u_dos + (*deltha * u_uno);
	u_cuatro = u_tres + (*deltha * u_dos);
	u_cinco = u_cuatro + (*deltha * u_tres);

	ec_final_hulu = pob_max - (alfa_cinco_hulu * u_cinco) - (alfa_cuatro_hulu * u_cuatro) - (alfa_tres_hulu * u_tres) - (alfa_dos_hulu * u_dos) - (alfa_uno_hulu * u_uno);
	Ht = *c1_hulu + *deltha * (ec_final_hulu);
	*c1_hulu = Ht;	

		
		

		//printf("  %f       %f         %f\n ",i, *Nn, *Hn);

	

	//printf("%f\n", Nt);
	//printf("%f\n", Ht);
}
