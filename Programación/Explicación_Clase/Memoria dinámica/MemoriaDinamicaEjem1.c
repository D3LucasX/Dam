#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	int * p_error = malloc(sizeof(int));   // Reserva espacio para un int.
									// Te devuelve un puntero a void
								   // hay que convertirlo para poder utilizarlo
	// Aqui hay un casting implicito
	int * p = (int*) malloc (sizeof(int));
	//Esta es la buena práctica

	if (p == NULL){ //Malloc ha fallado 
					//Porque no hjay memoria disponible.
		printf("ERROR FATAL\n");
		return 1;  // El programa ha fallado
	}


	*p = 42 // Usamos la memoria
	printf("El valor es : %d\n",*p );
	free(p);
	free(p_error);

	return EXIT_SUCCESS;

}
