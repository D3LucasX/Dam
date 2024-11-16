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
		*f = cambio;	// Incremento el contenido de n
		//(*n)++; Asi tambien se podria hacer.
	}
int main(){
	int n = 10, f = 20;
	printf("Las variables al inicio contienen: n = %d, f = %d\n", n, f);
	intercambiar(&n, &f); // La funcion modifica el contenido de la direccion de memoria
			     // Como la funcion esta pasando dos direccion de memoria, recibiremos
			     // dos direccion de memoria en la llamada de la función, por
			     // eso ponemos el &n y &f..
	printf("ahora quedaria: n = %d, f = %d\n", n, f); //No hace falta poner el & ya que la funcion ha cambiado el valor de las variables. 

	return 0;
}
