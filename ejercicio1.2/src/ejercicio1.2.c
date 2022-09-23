/*
 ============================================================================
Ejercicio 1-2: ingresar 3 números y mostrar cuál de los tres es el mayor.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	int numeroTres;
	int numeroMasGrande;

	printf("Numero uno: ");
	scanf("%d", &numeroUno);
	printf("Numero dos: ");
	scanf("%d", &numeroDos);
	printf("Numero tres: ");
	scanf("%d", &numeroTres);


	if(numeroUno > numeroDos && numeroUno > numeroTres){

		numeroMasGrande = numeroUno;
	}
	else
	{
		if(numeroDos > numeroUno && numeroDos > numeroTres){

			numeroMasGrande = numeroDos;
		}
		else
		{
			numeroMasGrande = numeroTres;
		}
	}

	printf("El mayor de los numeros es el: %d", numeroMasGrande);

	return 0;
}
