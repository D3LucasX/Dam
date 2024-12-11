#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	n = 3;
	int * arr = (int *) malloc(3*sizeof(int)); // Declaracion del array.

	if (arr == NULL){ // Siempre hay que hacer esto para saber si hay memoria suficiente.
		printf("Error, no se pudo asignar memoria.\n");
		return EXIT_FAILURE; // == a return 1;
	}

	// Inicializacion a cada elemento del array, el primero tendra 1, el segundo 3 y el tercero 5.
	for (int i = 0; i < n; i++){
		printf("arr[%d] = %d\n", i + 2, arr[i]);
		arr[i] = 2 * 1 + 1;
	}
	/*for(int i = 1; i < n; i++; j+=2){
		arr[i] = j;
	}*/

	
	//VAMOS A A MPLIAR EL ARRAY A 5 ELEMENTOS.
	int * arr_ampliado = (int *) realloc(arr, 5*sizeof(int));

	if (arr_ampliado == NULL){
		free(arr); // Realloc libera la memoria antigua, en caso de no haber espacio suficiente, no se podra ejecutar 
				   // el realloc, entonces no liberara la memoria, por lo tanto hay que liberarla en caso de error.
		printf("Error: No hay memoria\n");
		return EXIT_FAILURE;
	} 

	//Para evitarnos confusiones entre arr_ampliado y arr, es recomendable añadir :
	// arr = arr_ampliado;

	//MALA PRACTICA!! Se ga quedado "colgando".

	//Terminamos de inicializar.
	arr_ampliado[3] = 7;
	arr_ampliado[4] = 9;


	for (int i = 0; i < 5; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	
	//¿QUE TENGO QUE LIBERAR?
	free(arr_ampliado);
	// si hubieramos liberado tambien el arr, no daria error de compilacion
	// pero da double free detected al ejecutar, que es que te menciona que quiere

	return EXIT_SUCCESS;

}
