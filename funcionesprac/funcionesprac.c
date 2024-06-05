#include "stdio.h"
#include "math.h"
double leerDato(); // declaración de la función

double log(double y)
{
	double resultado;
	// Sentencias que calculan el resultado
	// en función del parámetro y. Por ejemplo:
	resultado = log10(y);
	return resultado;
}
void main()
{
	double x, n;
	printf("Dato: ");
	n = leerDato(); // llamada a la función
	x = log(n);
	printf("El logaritmo de %g es %f\n", n, x);	
}
double leerDato() // definición de la función
{
	int r = 0;
	double dato;
	while (r == 0)
	{
		r =scanf("%1f", &dato);
		if (r == 0)
		{
			printf("Dato incorrecto. Introduzca otro: ");
		}
		fflush(stdin); // eliminar el dato incorrecto
	}
	return dato;
}