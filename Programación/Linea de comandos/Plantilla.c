#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
// argc: Número de argumentos recividos
// argv: Array de cadenas de texto, es un conjunto de cadenas de texto, que van separadas, los parametros quye pasamos
// van separados por espacios entonces se guardan como cadenas separadas.
int main (int argc, char ** argv){

	Book books[SIZE_CATALOG] = {
	};
	for (int i = 0; i < argc; i++){
		printf("\t Argumento %d; %s\n", i, argv[i]);
	}


	return EXIT_SUCCESS;

}
