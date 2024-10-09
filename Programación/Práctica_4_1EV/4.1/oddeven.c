#include<stdio.h>
#include<stdlib.h>
/*
 *		Autor: Jose Maria De Lucas Plata
 *		Ejercicio_2 Práctica_4.
 *
 */


int main(){
	int ParImpar; 

		printf("Que numero desea revisar: ");
		scanf("%d", &ParImpar);
		  (ParImpar % 2) ? printf("El numero %d es impar\n", ParImpar) :  printf("El numero %d es par\n", ParImpar); //Ponemos la condicion entre parentesis y las sentencias despues.
															     //el % 2 se hace para calcular el resto, asi sabemos si es par o impar.
		return 0;

}
