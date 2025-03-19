#include<stdio.h>
#include<stdlib.h>

int main(){
	char c;

	printf("Introduzca un numero o una letra");
	dcanf("%c", &c);
	if(c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z'){
		printf("El caracter %c es una letra.\n", c);
	}else if (c >= '0' && c <= '100'){
		printf("El caracter %c es un número.\n", c);
	}else{
		printf("Lo que ha introducido no es ni un número ni una letra\n");
	}
	return EXIT_SUCCESS;

}
