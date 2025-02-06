#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int ContarConsonantes(char* palabra){

	if (*palabra == '\0'){ // Cuando *palabra sea igual a \0, retornara 0 y se acabara la recursión.

		return 0;
	}
	if (*palabra == 'a' || *palabra == 'e' || *palabra == 'i' || *palabra == 'o' || *palabra == 'u'){ // Si es igual a alguna vocal, se voovera a
																									  // llamar asi misma en una posicion mas.
																									  // esta funcion solo comprueba minúsculas.

		return 0 + ContarConsonantes(palabra + 1);
	}else{
			printf(" %c es consonante\n", *palabra);
			return 1 + ContarConsonantes(palabra+1); //return uno cuando es consonante, así cuando llegue al \0, irá
													 //sumando todos los unos de cuando han sido consonante.
		}


}
int main (){
	int inicio = 0;
	char palabra[5] = "Hola";
	printf("El total de consonantes es %d\n", ContarConsonantes(palabra)); // %d te dice el numero de return 1 que se han ido sumando.

	return EXIT_SUCCESS;

}
