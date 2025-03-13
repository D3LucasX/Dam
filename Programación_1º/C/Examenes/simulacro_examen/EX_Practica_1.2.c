#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){

int total_numeros1, total_numeros2;
int total_numeros_definitivos;
int eleccion;
int posicion1, posicion2;
int* array1;
int* array2;
int* arraySuma = NULL;
int* arrayConcatenadas = NULL;


printf("Introduzca el total de numeros que tendra el array.\n");
scanf("%d",&total_numeros1);
array1 = (int*) malloc (total_numeros1 * sizeof(int));
if (array1 == NULL) {
                printf("No hay espacio en memoria para el array suma.\n");
                return EXIT_FAILURE;
            }

for (int i = 0; i < total_numeros1; i++){
	array1[i] = 3 * (i + 1);
	printf("%d\n", array1[i]);
}
//printf("%d - %d - %d - %d", array1[0], array1[1], array1[2], array1[3]);

printf("Introduzca el total de numeros que tendra el array 2.\n");
scanf("%d",&total_numeros2);
array2 = (int*) malloc (total_numeros2 * sizeof(int));
if (array2 == NULL) {
                printf("No hay espacio en memoria para el array suma.\n");
                return EXIT_FAILURE;
            }

for (int i = 0; i < total_numeros2; i++){
	array2[i] = 3 * (i + 1);
	printf("%d\n", array2[i]);
}
//printf("%d - %d - %d - %d", array2[0], array2[1], array2[2], array2[3]);

printf("seleccione que quiere hacer:\n\
	1. Sumar coordenadas.\n\
	2. Concatenar arrays.\n");
scanf("%d", &eleccion);
switch(eleccion){
case 1:
	/*for (int i = 0; i < total_numeros1; i++){
	printf("%d - ", i, array1[i]);
}
	for (int i = 0; i < total_numeros2; i++){
	printf("%d.%d - ", i,array2[i]);
}

	printf("¿Que posiciones desea sumar?\n");
	scanf("%d", &posicion1);
	scanf("%d", &posicion2);

	int resultado = array1[posicion1] + array2[posicion2];

	printf("El resultado de la suma entre la posicion %d del array1 y la posicion %d del array2 es : %d", posicion1, posicion2, resultado);*/
	/*if (total_numeros1 > total_numeros2){
		total_numeros_definitivos = total_numeros1;
		arraySuma = (int*) malloc (total_numeros1 * sizeof(int));
		if (arraySuma == NULL){
			printf("No hay espacio en memoria\n");
			return EXIT_FAILURE;
	}

	}else if (total_numeros2 > total_numeros1){
		total_numeros_definitivos = total_numeros2;
		arraySuma = (int*) malloc (total_numeros2 * sizeof(int));
		if (arraySuma == NULL){
			printf("No hay espacio en memoria\n");
			return EXIT_FAILURE;
	}

	}else{
		total_numeros_definitivos = total_numeros1;
		arraySuma = (int*) malloc (total_numeros_definitivos * sizeof(int));
		if (arraySuma == NULL){
			printf("No hay espacio en memoria\n");
			return EXIT_FAILURE;
	}
}*/
	
	arraySuma = (int*) malloc(total_numeros1 * sizeof(int));
	if (arraySuma == NULL) {
                printf("No hay espacio en memoria para el array suma.\n");
                return EXIT_FAILURE;
            }
	for(int i = 0; i < total_numeros1; i++){
		arraySuma[i] = array1[i] + array2[i];
		printf("%d.%d -- ", i + 1, arraySuma[i]);
	}
	break;
case 2:
	total_numeros_definitivos = total_numeros1 + total_numeros2;
	arrayConcatenadas = (int*) malloc (total_numeros_definitivos * sizeof(int));
	if (arrayConcatenadas == NULL){
			printf("No hay espacio en memoria\n");
			return EXIT_FAILURE;
	}
	for (int i = 0; i < total_numeros1; i++){
		arrayConcatenadas[i] = array1[i];
	}
	for (int j = total_numeros1; j < total_numeros_definitivos; j++){
		arrayConcatenadas[j] = array2[j - total_numeros1];
	}
	printf("Array concatenado:\n");
            for (int i = 0; i < total_numeros_definitivos; i++) {
                printf("%d ", arrayConcatenadas[i]);
            }
	break;

default:
	break;

}

free(array1);
free(array2);
if (arraySuma != NULL)
	free(arraySuma);
if (arrayConcatenadas != NULL)
	free(arrayConcatenadas);

	return EXIT_SUCCESS;

}
