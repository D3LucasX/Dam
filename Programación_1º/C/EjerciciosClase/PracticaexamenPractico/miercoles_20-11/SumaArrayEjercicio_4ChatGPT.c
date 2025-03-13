#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	int suma = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for (int i = 0; i < 10; i++){
	suma += arr[i];
	}
	printf("El resultado de la suma de todos los numeros del array es: %d\n", suma);


	return EXIT_SUCCESS;

}
