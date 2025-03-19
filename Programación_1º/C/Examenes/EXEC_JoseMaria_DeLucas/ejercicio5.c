#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	int ingreso = 0;
	int suma = 0;
	while (ingreso < 0){
		scanf("%d", &ingreso);
		suma += ingreso;
	}
	printf("La suma de los números ingresados es %d.\n", suma);


	return EXIT_SUCCESS;

}
