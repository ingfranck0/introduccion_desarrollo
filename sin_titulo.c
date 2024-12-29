/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int i;
	int impares;
	int numero;
	int pares;
	pares = 0;
	impares = 0;
	/* Bucle para ingresar 10 números */
	for (i=1; i<=10; ++i) {
		printf("Ingresa el número %i:\n", i);
		scanf("%i", &numero);
		/* Verificar si el número es par o impar */
		if ((numero%2==0)) {
			printf("El número %i es par.\n", numero);
			pares = pares+1;
		} else {
			printf("El número %i es impar.\n", numero);
			impares = impares+1;
		}
	}
	/* Mostrar la cantidad de números pares e impares */
	printf("De los 10 números ingresados:\n");
	printf("Números pares: %i\n", pares);
	printf("Números impares: %i\n", impares);
	return 0;
}

