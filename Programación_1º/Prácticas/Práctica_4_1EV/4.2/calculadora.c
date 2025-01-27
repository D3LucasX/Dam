#include<stdio.h>
#include<stdlib.h>
/*
 **
 **              Autor: Jose Maria De Lucas Plata
 **              Ejercicio_1, Práctica_4
 */
int main(){
	float num1, num2;
	char operador;
	printf("introduzca el primer numero que quiere operar: ");
	scanf("%f", &num1);
	printf("Introduzca el segundo numero que quiera operar: ");
	scanf("%f", &num2);

	getchar();

	printf("Que operacion desea realizar? (+: suma, -: resta, *: multiplicación, /: división)\n");
	scanf("%c", &operador);

	switch (operador){ //Usaremos de condición la variable operador, que guardara el signo del operador que el usuario quiera usar.
		case '+':
			float resultadoSuma = num1 + num2;
			printf("El resultado de su suma es: %.2f\n", resultadoSuma);
			break;
		case '-':
			float resultadoResta = num1 - num2;
			printf("El resultado de su resta es: %.2f\n", resultadoResta);
			break;

		case '*':
			float resultadoMultiplicacion = num1 * num2;
			printf("El resultado de su resta es: %.2f\n", resultadoMultiplicacion);
			break;

		case '/':
			float resultadoDivision = num1 / num2;
			printf("El resultado de su resta es: %.2f\n", resultadoDivision);
			break;
		default:
			printf("El operador que ha elegido, no existe");			
	}
	return 0;

}
