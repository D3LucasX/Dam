#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	int n = 0;
	int i = 0;
	

	printf("¿Cuantos espacios en memoria quiere resservar?\n");
	scanf("%d", &n);
	int * arr = (int*) malloc(n*sizeof(int));

	if(arr == NULL){
		printf("Error, no hay memoria.\n");
		return EXIT_FAILURE;
	}
	printf("Introduce los valores de cada espacio en memoria.\n");
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		printf("arr[%d] - %d\n", i, arr[i]);
	}
	free(arr);



	return EXIT_SUCCESS;

}
