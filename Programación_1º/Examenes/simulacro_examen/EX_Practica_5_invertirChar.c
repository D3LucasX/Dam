#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
// Función que invierte el sentido de una palabra al reves.
char* invertir(char* palabra){ // De tipo char* para que devuelva el puntero de la cadena
							   // si no solo devolveria un char.
	int tamaño = strlen(palabra);
	int newTam = tamaño - 1;
	char* newArr = (char*) malloc (tamaño * sizeof(char));
	for(int i = 0; i < tamaño; i++){
		newArr[i] = palabra[newTam - i]; // -1 para que vaya hjacia detras
	}
		newArr[tamaño] = '\0';
		return newArr;
}

int main (){
	int num = 0;
	while(num < 0){
	printf("Numero entero positivo\n");
	scanf("%d", &num);
	}

	char* palabra = (char*) malloc (num * sizeof(char));

	printf("Introduzca una palabra para invertirla.\n");
	scanf("%[^\n]", palabra);
	printf("palabra introducida: %s\n", palabra);

	char* invertida = invertir(palabra); // Llamar a la función para invertir la palabra
    printf("La palabra invertida es: %s\n", invertida);

	free(palabra);
	free(invertida);
	return EXIT_SUCCESS;

}
