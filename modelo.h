#include <math.h>

void modelo(float *delta, long *max, float *c1_netflix, float *c1_hulu)
{
	float pob_max = 6 * pow(10, 9);
	float u_cinco, u_cuatro, u_tres, u_dos, u_uno, u_n;
	float u_cinco_prima, u_cuatro_prima, u_tres_prima, u_dos_prima, u_uno_prima, u_n_prima;
	float alfa_uno, alfa_dos, alfa_tres, alfa_cuatro, alfa_cinco;

	alfa_uno = 2.59;
	alfa_dos = -0.36;
	alfa_tres = 0.02;
	alfa_cuatro = -0.26;
	alfa_cinco = -0.28;

	u_uno = c1_netflix;
	u_dos = u_uno + (delta * u_cero);
	u_tres = u_dos + (delta * u_uno);
	u_cuatro = u_tres + (delta * u_dos);
	u_cinco = u_cuatro + (delta * u_tres);

	ec_final = pob_max - (alfa_cinco * u_cinco) - (alfa_cuatro * u_cuatro) - (alfa_tres * u_tres) - (alfa_dos * u_dos) - (alfa_uno * u_uno);

	//Nt = *Nn + *deltha * (ec_final);
}
