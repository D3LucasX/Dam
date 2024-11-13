#include<>
#include<>
/**
 * EJEMPLO DE PASO DE UN ARGUMENTO A UNA FUNCION POR REFERENCIA
 *
 */

//Quiero que realmente incremente la variable dada como argumento.
	void incrementar(int *n){ //Recibe un puntero
		
		printf("Valor recibido%d\n", *n)
		*n = *n + 1; // Incremento el contenido de n
		//(*n)++; Asi tambien se podria hacer.
		printf("Valor incrementado en la funcion: %d\n", n)
	}
int main(){
	int valor = 10;
	incrementar(&Valor); // La funcion modifica el contenido de la direccion de memoria
			     // Como la funcion esta pasando una direccion de memoria, recibiremos
			     // una direccion de memoria en la llamada de la función, por
			     // eso ponemos el &Valor.
	printf("Valor en el main: %d", valor); 

	return EXIT_SUCCESS;
}
