#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	int n = 5;


	int * arr = (int *) malloc(5*sizeof(int)); // Solo reserva la memoria pero no la toca.


	if (arr == NULL){
		printf("Error, no se pudo asignar memoria.\n");
		return 1;
	}

	for (int i = 0; i < n; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	/*Lo mismo con calloc*/

	int * arr2 = (int *) calloc(5, sizeof(int));

	if (arr == NULL){
	printf("Error, no se pudo asignar memoria.\n");
	return 1;
}

for (int i = 0; i < n; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	/*Con calloc y malloc se hace mas o menos lo mismo, solo que con malloc no necesariamente el espacio que reserves va a tener un 0
	pero calloc siempre el espacio que reserve va a tener un 0*/

	/*elegimos uno u otro en función de que si el primer uso que le vamos a dar a la direccion de memoria va a ser de lectura, que te la inicializa a 0 directamente
	esto no es bueno siempre usarlo ya que al tener que ponerte un 0 en cada elemento, tarda mas*/

	free(arr);
	free(arr2);
	return EXIT_SUCCESS;

}
