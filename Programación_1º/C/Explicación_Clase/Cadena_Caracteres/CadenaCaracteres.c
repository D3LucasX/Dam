#include<stdio.h>
#include<stdlib.h>
/**
 *			Autor : Jose Maria De Lucas Plata
 *
 */

int main(){
	char str1[5] = "Hola";
	printf("%s\n", str1);
	printf("%c\n", str1[3]); // Imprime el 2 caracter en vez de toda la cadena, por que empieza a contar desde el 0, el 0 es la h
	str1[4] = '$'; //Elimina el /0 y se seguira imprimiendo hasta que haya un \0 en la memoria.
	printf("%s\n", str1);
	return EXIT_SUCCESS;
}
