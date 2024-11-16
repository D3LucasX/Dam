#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	int x[5] = {1,2,3,4,5};
	int * p = x;
	int suma = 0;
	for(int i = 0; i < 5; i++){
		suma += *p;
			p++;		
	}
	printf("El resiltado de la suma de los numeros del array es = %d\n", suma);


	return EXIT_SUCCESS;

}
