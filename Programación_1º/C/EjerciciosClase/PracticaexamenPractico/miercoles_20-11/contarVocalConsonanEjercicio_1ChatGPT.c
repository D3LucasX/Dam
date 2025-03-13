#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	char cadena[100];
	int vocales = 0, consonantes = 0, longitud = 0, i = 0;
	printf("Introduce una palabra o una frase: \n");
	scanf("%[^\n]", cadena);
	longitud = strlen(cadena);
	for(i = 0; i < longitud; i++){
		if(cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u' || cadena[i] == 'A'|| cadena[i] == 'E' || cadena[i] == 'I' || cadena[i] == 'O' || cadena[i] == 'U'){
			vocales++;
		}else if (cadena[i] == ',' || cadena[i] == '.' || strcmp(&cadena[i],"¿") == 0 /*Esto es la unica manera de comparar un caracter con un signo de interrogacion o exclamacion*/|| strcmp(&cadena[i],"?") == 0 || cadena[i] == '-' || cadena[i] == '_' || cadena[i] == '*' || cadena[i] == '+' || strcmp(&cadena[i],"!") == 0 || strcmp(&cadena[i],"¡") == 0 || cadena[i] == '1' || cadena[i] == '2' || cadena[i] == '3'|| cadena[i] == '4' || cadena[i] == '5' || cadena[i] == '6' || cadena[i] == '7' || cadena[i] == '8' || cadena[i] == '9' || cadena[i] == '0' || cadena[i] == '\0'|| cadena[i] == ' '){
			continue;
	}else{
		consonantes++;
	}

	}

	printf("Vocales: %d\n", vocales);
	printf("Consonantes: %d\n", consonantes);


	return EXIT_SUCCESS;

}
