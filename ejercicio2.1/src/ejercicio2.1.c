/*
 ============================================================================
Ejercicio 2-1: Ingresar 5 números enteros calcular y mostrar el promedio de los números.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout,NULL);

	int numero;
	int i;
	int acumuladorNumeros;
	float promedio;

	acumuladorNumeros = 0;

	for(i=0; i<5; i++){

		printf("ingrese un numero: ");
		scanf("%d", &numero);

		acumuladorNumeros += numero;
	}

	promedio = (float) acumuladorNumeros / 5;

	printf("el promedio es: %f", promedio);

	return 0;
}
