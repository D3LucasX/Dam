#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	int total_numeros;
	float* array_float = NULL;
	char repetir[2];

	do{
		do{
		printf("Introduce el el numero de valores que tendra el array\n");
		scanf("%d", &total_numeros);
			if (total_numeros <= 0){
				printf("Introduzca un valor positivo\n");
			}
		}
		while(total_numeros < 0);
	if (array_float == NULL){
		array_float = (float*) malloc (total_numeros * sizeof(float));
			if (array_float == NULL){
			printf("No hay memoria\n");
			}
	}else{
		array_float = (float*) realloc( array_float, (total_numeros * sizeof(float)));
	}
	float i = 0;
	int j = 0;
	for (i = 0; i < total_numeros; i++){
		array_float[j] = i / total_numeros;
		printf("Posición %d: %f\n", j, array_float[j]);
		j++;
	}
	printf("¿Quiere introducir otra serie de valores?\n");
	scanf(" %[^\n]", repetir);
	}
	while (strcmp(repetir, "si") == 0);


	free (array_float);
	return EXIT_SUCCESS;

}
