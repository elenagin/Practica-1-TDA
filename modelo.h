#include <math.h>

void modelo(float *delta, long *max)
{
	float NUM_HAB = 6 * pow(10, 9);
	float u_cinco, u_cuatro, u_tres, u_dos, u_uno, u_n;
	float u_cinco_prima, u_cuatro_prima, u_tres_prima, u_dos_prima, u_uno_prima, u_n_prima;
	float alfa_uno, alfa_dos, alfa_tres, alfa_cuatro, alfa_cinco;

	u_uno = 61;
	u_dos = 58.5;
	u_tres = 52.8;
	u_cuatro = 47.9;
	u_cinco = 43.4;

	alfa_uno = 2.59;
	alfa_dos = -0.36;
	alfa_tres = 0.02;
	alfa_cuatro = -0.26;
	alfa_cinco = -0.28;

	u_cuatro_prima = NUM_HAB - (alfa_cuatro * u_cuatro) - (alfa_tres * u_tres) - (alfa_dos * u_dos) - (alfa_uno * u_uno);
	u_tres_prima = u_tres + *delta * u_cuatro;
	u_dos_prima = u_dos + *delta * u_tres;
	u_uno_prima = u_uno + *delta * u_dos;
	u_n_prima = u_n + *delta * u_uno;
}
