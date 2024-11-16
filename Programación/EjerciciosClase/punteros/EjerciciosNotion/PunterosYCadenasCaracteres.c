#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
void ConteoCaracteres (char *str){ // Función para contar numero de caracteres en una cadena.
	/*int longi = strlen(str);
	printf("La longitud de la cadena de caracteres es igual a: %d\n", longi);*/
	//Con esto nos dice la longitud exacta de nuestro arreglo.
	int longi = 0;
	//Con esto hacemos el conteo de los caracteres hasta el caracter nulo '\0' 
	while(*str != '\0'){
		if (*str != ' '){
		// Y si es distinto de un espacio, que aumente en uno la variable
		// así no nos contara el espacio(' ')
			longi++;
		}
		str++;//Avanzamos al siguiente caracter.
	}
	printf("El numero exacto de caracteres sin contar espacios es %d\n", longi);

	}
void ConteoVocales(char str[], char * p){
	int vocales = 0;
	for(int i = 0; *p != '\0'; i++ ){
		if (*p == 'a' ||*p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' || *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U' ){
			int vocal = 1;
			vocales++;
		}
		p++;
	}
	printf("El numero de vocales es igual a %d\n", vocales);
}
int main (){
	char cadena[] = "Adios Mundo";
	char * p = cadena;
	ConteoCaracteres(cadena);
	ConteoVocales(cadena, p);




	return EXIT_SUCCESS;

}
