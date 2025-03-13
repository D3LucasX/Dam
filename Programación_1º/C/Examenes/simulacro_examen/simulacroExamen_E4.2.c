#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	int tamano;
	float* array;
scanf("%d", &tamano);
array = (float*) malloc (tamano * sizeof(float));
if (array == NULL){
	printf("No hay espacio para el array\n");
	return EXIT_FAILURE;
}

for (int i = 0; i < tamano; i++){
	array[i] = 1.0/(i + 1);
	printf("%f\n", array[i]);
}

array = (float*) realloc (array,((tamano = tamano * 2) *sizeof(float)));
if (array == NULL){
	printf("No hay espacio para el array\n");
	return EXIT_FAILURE;
}
tamano = tamano / 2;
 for (int i = tamano; i < (tamano * 2); i++){
 	array[i] = 1.0 / (i + 1);
 	printf("pepe%f\n", array[i - tamano]);
 }
 printf("Ahora viene todo el array, tiene que tener 6\n");
 tamano = tamano * 2;
 for(int i = 0; i < tamano; i ++){
 	printf("%f\n", array[i]);
 }

free(array);
	return EXIT_SUCCESS;

}

   /*PREGUNTAS*/
   
	/*1. ¿Qué ocurre en la memoria cuando usamos `realloc()` para expandir un array? ¿Se conservan los valores 		anteriores? ¿Siempre se puede expandir en el mismo bloque de memoria o se busca un espacio nuevo oblig		   atoriamente? Consulta las direcciones de memoria para consultarlo.
    	     *Pista:  printf(”%p” , direccion_de_memoria);  para imprimir direcciones de memoria.*/

	     	/* Cuando usamos realloc para expandir un array, los valores se conservan, pero no se garantiza
		 * que la direccion de memoria sea la misma.
		 * Si la memoria contigua esta libre, realloc simplemente exapandira el array en ese mismo bloque.
		 * Si no, se crea una copia del array actual y se lleva a otro lado de la memoria en el que si
		 * entre el array incrementado. El anterior bloque lo libera el realloc, no hace falta hacerle 
		 * free.
	     









