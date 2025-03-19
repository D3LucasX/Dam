#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	int * dir = NULL; //Inicializamos el puntero a null para usarlo luego, lo inicias a nada, si accedemos al contenido de null te sale core dumped.
	printf("Dirección de memoria :%p\n", dir);
	printf("Contenido de esa dirección :%d\n", *dir);// Si accedemos asi nos dara core dumped ya que el puntero es NULL, no esta inicializado.


	return EXIT_SUCCESS;

}
