/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<math.h>

int main() {
	int digito1;
	int digito2;
	int digito3;
	int digito4;
	int numero;
	int numeroinvertido;
	/* Pedir al usuario que ingrese un n�mero de 4 d�gitos */
	printf("Ingresa un n�mero de 4 d�gitos:\n");
	scanf("%i", &numero);
	/* Verificar que el n�mero tenga exactamente 4 d�gitos */
	if (numero>=1000 && numero<=9999) {
		/* Extraer cada d�gito del n�mero ingresado */
		digito1 = numero%10;
		numero = int(numero/10);
		digito2 = numero%10;
		numero = int(numero/10);
		digito3 = numero%10;
		numero = int(numero/10);
		digito4 = numero;
		/* Construir el n�mero invertido */
		numeroinvertido = (digito1*1000)+(digito2*100)+(digito3*10)+digito4;
		/* Mostrar el n�mero invertido */
		printf("El n�mero invertido es: %i\n", numeroinvertido);
	} else {
		/* Mostrar un mensaje de error si el n�mero no tiene 4 d�gitos */
		printf("Error: Debes ingresar un n�mero de 4 d�gitos.\n");
	}
	return 0;
}

