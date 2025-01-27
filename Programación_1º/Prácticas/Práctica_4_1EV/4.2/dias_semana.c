#include<stdio.h>
#include<stdlib.h>
/*
 **
 **              Autor: Jose Maria De Lucas Plata
 **              Ejercicio_1, Práctica3, Crea una calculadora de floats con cada operación en una función.
 */
int main(){
	int num1;
	printf("Introduzca un numero entre el 1 y el 7: ");
	scanf("%d", &num1);


	switch (num1){
		case 1:
			printf("El día 1 es Lunes\n");
			break;
		case 2:
			printf("El día 2 es Martes\n");
			break;

		case 3:
			printf("El día 3 es Miercoles\n");
			break;

		case 4:
			printf("El día 4 es Jueves\n");
			break;

		case 5:
			printf("El día 5 es Viernes\n");
			break;

		case 6:
			printf("El día 6 es Sábado\n");
			break;

		case 7:
			printf("El día 7 es Domingo\n");
			break;
		default:
			printf("Número inválido");			
	}
	return 0;

}
