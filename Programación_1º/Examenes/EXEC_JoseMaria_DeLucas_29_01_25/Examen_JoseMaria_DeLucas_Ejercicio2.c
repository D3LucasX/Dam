#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
void modificar_elementos(int tamano, int valor[]){
	valor[tamano] += 10;
}

void modificar_elementos_referencia(int* valor[], int* tamano){
	*valor += 10;
}

int main (){

	int tamano;
	printf("Dame el valor del array\n");
	scanf("%d", &tamano);

	int* array = (int*) malloc (tamano * sizeof(int));

	printf("Ahora inserte el valor para cada posición\n");
	for (int i = 0 ; i < tamano; i++){
		scanf("%d", &array[i]);
	}
	for (int i = 0 ; i < tamano; i++){

		printf("%d - ", array[i]);
	}
	

	modificar_elementos(tamano, &array[tamano]);
	printf("Valor en main de la primera funcion %d\n", array[tamano]);
	modificar_elementos_referencia(&array, &tamano);
	printf("Valor en main de la segunda funcion %d\n", array[tamano]);
	free(array);
	return EXIT_SUCCESS;

}

/* Pregunta 1:
    lo que pasa es que si lo pasas por valor, no se cambia en el main
    si no que se hace una copia en la funcion, que luego desaparece al terminar la ejecución de la función.
    Si lo pasas por referencia, como pasas la direccion de memoria, directamente
    haces cambios en ese valor y se queda ya guardado.*/
/* Pregunta 2: 
	pues ocuparia tamano * sizeof(double), que seria
	tamaño por lo que ocupa un tipo double, que son 8 bytes.*/