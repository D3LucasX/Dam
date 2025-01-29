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
