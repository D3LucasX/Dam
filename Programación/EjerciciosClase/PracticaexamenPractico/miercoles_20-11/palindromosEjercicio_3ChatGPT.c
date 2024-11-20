#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	char cadena[20];
	char cadena2[20];
	printf("Ingrese una cadena de caracteres de no mas de 20 caracteres.\n");
	scanf( "%[^\n]", cadena);
	int longitud = strlen(cadena);
	for (int i = 0; i < longitud; i++){
		cadena2[i] = cadena[longitud - 1 - i];
		//De esta manera, con el -1 te saltas el \0 de
		//cadena, y con el - i en la 
		//primera vuelta sera -0, por lo tanto sera el último caracter,
		//en la siguiente, sera menos 1, que sera el penultimo caracter
		//y asi sucesivamente
	}
	cadena2[longitud] = '\0'; //al ultimo valor de la cadena2 le damos
				  //el valor de \0, ya que ese no se copio.
				  //si no nunca seran iguales en la comparacion 
				  //por que una tendra el \ y la otra no
	printf("%s\n", cadena2);
	if(strcmp(cadena, cadena2) == 0){
		printf("La cadena que introdujo es un palíndromo\n");
	}else{
		printf("La cadena que introdujo no es un palindromo\n");
	}




	return EXIT_SUCCESS;

}
