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
	/* Pedir al usuario que ingrese un número de 4 dígitos */
	printf("Ingresa un número de 4 dígitos:\n");
	scanf("%i", &numero);
	/* Verificar que el número tenga exactamente 4 dígitos */
	if (numero>=1000 && numero<=9999) {
		/* Extraer cada dígito del número ingresado */
		digito1 = numero%10;
		numero = int(numero/10);
		digito2 = numero%10;
		numero = int(numero/10);
		digito3 = numero%10;
		numero = int(numero/10);
		digito4 = numero;
		/* Construir el número invertido */
		numeroinvertido = (digito1*1000)+(digito2*100)+(digito3*10)+digito4;
		/* Mostrar el número invertido */
		printf("El número invertido es: %i\n", numeroinvertido);
	} else {
		/* Mostrar un mensaje de error si el número no tiene 4 dígitos */
		printf("Error: Debes ingresar un número de 4 dígitos.\n");
	}
	return 0;
}

