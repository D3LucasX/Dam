#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	int num = 0;
	do{
	  scanf("%d", &num);
	  printf("Número no válido\n");
	}while(num < 1 || num > 10);
	printf("Has ingresado el número %d.\n", num);




	return EXIT_SUCCESS;

}
