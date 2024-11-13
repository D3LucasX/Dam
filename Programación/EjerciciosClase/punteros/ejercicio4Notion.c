#include<stdio.h>
#include<stdlib.h>
/**
 * EJEMPLO DE PASO DE UN ARGUMENTO A UNA FUNCION POR REFERENCIA
 *
 */

//Quiero que realmente incremente la variable dada como argumento.
	void intercambiar(int *n, int *f){ //Recibe dos puntero
		
		printf("Valor recibido %d, %d\n", *n, *f);
		int cambio = 0;
	      	cambio = *n;
		*n = *f;
		*n = cambio;	// Incremento el contenido de n
		//(*n)++; Asi tambien se podria hacer.
	}
int main(){
	int n = 10, f = 20;
	intercambiar(&n, &f); // La funcion modifica el contenido de la direccion de memoria
			     // Como la funcion esta pasando una direccion de memoria, recibiremos
			     // una direccion de memoria en la llamada de la función, por
			     // eso ponemos el &Valor.
	printf("ahora quedaria: n = %d, f = %d", n, f); 

	return 0;
}
