#include<stdio.h>
#include<stdlib.h>

int main(){
	char palabra[11];
	char caracter;
	printf("Introduzca una palabra de 10 caracteres\n");
	scanf("%s", palabra);
	printf("Por que caracter desea cambiarlo?: \n");
	scanf(" %c", &caracter);
	printf("La palabra antes de ser modificada es: %s\n", palabra);
		palabra[10] = caracter;
	printf("La palabra despues de estar modificada es: %s\n", palabra);
return 0;	
}

