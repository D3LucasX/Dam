#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	int numero = 0;
	scanf("%d", &numero);
	if(numero > 0){
	printf("El número %d es positivo.\n", numero);
	}else if(numero == 0){	
	printf("El número ingresado es cero.\n");
	}else {
		printf("El número %d es negativoi.\n", numero);
	}
	return EXIT_SUCCESS;

}
