#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	float x = 8.99;
	float * p = &x;
	printf("Valor de la variable: %f\n", x);
	printf("Direccion de la variable: %p\n", &x);
	printf("Valor apuntado por el puntero; %f\n", *p);
	printf("Valor de p, que es la direccion de x:; %p\n", p);


	return EXIT_SUCCESS;

}
