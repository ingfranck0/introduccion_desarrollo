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
	/* Bucle para ingresar 10 n�meros */
	for (i=1; i<=10; ++i) {
		printf("Ingresa el n�mero %i:\n", i);
		scanf("%i", &numero);
		/* Verificar si el n�mero es par o impar */
		if ((numero%2==0)) {
			printf("El n�mero %i es par.\n", numero);
			pares = pares+1;
		} else {
			printf("El n�mero %i es impar.\n", numero);
			impares = impares+1;
		}
	}
	/* Mostrar la cantidad de n�meros pares e impares */
	printf("De los 10 n�meros ingresados:\n");
	printf("N�meros pares: %i\n", pares);
	printf("N�meros impares: %i\n", impares);
	return 0;
}

