#include<stdio.h>
#include<stdlib.h>
/**
 *			Autor : Jose Maria De Lucas Plata
 *
 */

int main(){ //Un Array son cadenas de caracteres
	char str1[100];
	char str2[100];
	printf("Introduce una palabra: "); // Si en vez de pedir letras pedimos numeros, nos guarda los numeros tal cual, no nos hace ninguna cuenta
					   // Es decir, si le digo al printf que me sume %s+%s nos pondra; num1 + num2. 
	scanf("%s", str1);//No necesitamos &' porque con la declaracion de la cadena ya estas declarando donde esta el espacio reservado en memoria, 
			  //asi que se guarda donde va a emppezar la cadena de caracters.
	
	scanf("%s", str2);//No necesitamos &' porque con la declaracion de la cadena ya estas declarando donde esta el espacio reservado en memoria, 
	printf("La cadna que introdujo es: %s %s\n", str1, str2);
	return EXIT_SUCCESS;
}
