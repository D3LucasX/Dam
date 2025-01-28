#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
char capitalizar (char * letra_minuscula){
	*letra_minuscula = *letra_minuscula + 'Z' - 'z';
	printf("%s", letra_minuscula);
	return *letra_minuscula;
}

int main (){
	int longitud_palabra;
	char* palabra;
 printf("Dame el numero exacto que tendra una palabra\n");
 scanf("%d", &longitud_palabra);

 palabra = (char*) malloc ((longitud_palabra + 1) * sizeof(char));
 // HAY QUE TENER SIEMPRE EN CUENTA EL \0 !!!!
 if (palabra == NULL){
 	printf("No hay memoria.\n");
 	return EXIT_FAILURE;
 }
 printf("Escriba la palabra con la longitud exacta que facilitaste anteriormente.\n");
 scanf("%s", palabra);
//for (int i = 0; i < longitud_palabra; i++){
	capitalizar(palabra);
//}
printf("%s", palabra);
free(palabra);

	return EXIT_SUCCESS;

}

/* Podría imprimirse correctamente si da la casualidad de que 
   despues de la memoria que hemos reservado, no hay nada escrito ya
   por lo que podria parecer que nuestro programa esta bien.
   Para asegurarnos, lo mejor es ejecutar con valgrind, para
   ver si hemos usado memoria que no habiamos reservado.
   Si reservaramos espacio para 5 caracteres, y escribieramos murcielago,
   estariamos utilizando memoria que no hemos reservado.
