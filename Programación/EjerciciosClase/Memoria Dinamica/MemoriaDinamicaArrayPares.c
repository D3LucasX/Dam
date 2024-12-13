#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	n = 0;
	printf("Ingresa un número.\n");
	scanf("%d", n);

	int * arr = (int *) malloc( n * sizeof(int));

	if(arr == NULL){
		printf("Error, no hay memoria.\n");
		return EXIT_FAILURE;
	}

	for (int i = 0, j = 0; i < n; i+=2, j++){
		arr[j] = i;
		printf("arr[%d] = %d.\n", j, arr[i] );
	}

	free(arr);


	return EXIT_SUCCESS;

}
