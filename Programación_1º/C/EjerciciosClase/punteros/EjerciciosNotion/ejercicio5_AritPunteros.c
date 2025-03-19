#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	//## ¿Que pasa si incrementas p, como se puede reiniciar p,
	// Como puedo imprimir lo que hay en cada posicion de p sin
	// tener que cambiar donde apunta p?
	

	int arr[5] = {1,2,3,4,5};
	int * p = arr;

	printf("Elemento 1: %d\n", *p);
	p++;
	printf("Elemento 2: %d\n", *p);
	p += 2;
	printf("Elemento 4: %d\n", *p);
	printf("%d\n", p[0]);
	// Esto me imprimiria 4 ya que he ido aumentando p, y p actualmente
	// se encuentra en la posicion 4.
		
	printf("%d\n", *(p - 3));
	// ESto imprimiria el contenido de p, en la posicion 1 (*p)
	
	printf("%d\n", p[0]);
	//Pero seguiria siendo 4 lo que contiene p (*p)
	
	p = arr;
	// Así reiniciaria p a como estaba antes de los incrementos.
	
	printf("%d\n", p[0]);
	//otra manera que tendria seria incrementar la posicion de memoria y
	//no directamente el puntero
	

	for(int i = 0; i < 5; i++){
		printf("El valor del elemento %d: %d en la posicion de memoria %p\n", i + 1, p[i], (p+i));
		//Esta sería la manera de ir emprimiendo lo que tiene p en cada posición sin tener que cambiar donde apunta p.

	}


	return EXIT_SUCCESS;

}
