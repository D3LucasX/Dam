#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	int Entrada = 0;
	int positivo = 0;
	scanf("%d", &Entrada);
	Entrada % 2 == 0 ? true : false;
	if (Entrada == true){
		printf("El numero %d es par\n", Entrada);
	}else if(Entrada == false){
		printf("El numero %d es impar\n", Entrada);
	}else {
		printf("Introduzca un nímero positivo\n");
	}


	return EXIT_SUCCESS;

}
