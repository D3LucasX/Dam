#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char palabra[100];
	char palabra2[100];
	printf("Introduzca una palabra\n");
	scanf("%s", palabra);

	printf("Introduzca la misma palabra\n");
	scanf(" %s", palabra2);
	if (strcmp(palabra, palabra2) == 0){
		printf("son iguales\n");
	}else{
		printf("no son iguales\n");
	}
	if(strcmp(palabra, palabra2) < 0){
		printf("La palabra %s es menor que la palabra %s\n", palabra, palabra2);
	}else if(strcmp(palabra, palabra2) > 0){
		printf("La palabra %s es mayor que la palabra %s\n", palabra, palabra2);
	}else{
		printf("ninguna es mayor/menor que la otra\n");
	}
	if (palabra[0] == palabra2[0]){
		printf("El primer caracter es igual\n");

		if (palabra[1] == palabra2[1]){
			printf("El segundo caracter es igual\n");
		}else {
			printf("El segundo caracter es diferente\n");
		}

	}else{ 
		printf("El primer caracter es diferente\n");
	}

	return 0;	

}
