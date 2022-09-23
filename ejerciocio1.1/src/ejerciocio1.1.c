/*
 ============================================================================
Ejercicio 1-1: Ingresar dos números enteros, sumarlos y mostrar el resultado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	int resultado;

	printf("Numero uno: ");
	scanf("%d", &numeroUno);
	printf("Numero dos: ");
	scanf("%d", &numeroDos);

	resultado = numeroUno + numeroDos;

	printf("El resultado es: %d", resultado);

	return 0;
}
