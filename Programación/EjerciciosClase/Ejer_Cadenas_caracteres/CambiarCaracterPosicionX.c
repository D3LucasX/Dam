#include<stdio.h>
#include<stdlib.h>

int main(){
	char palabra[11];
	int posicion;
	char caracter;
	printf("Introduzca una palabra de 10 caracteres\n");
	scanf("%s", palabra);
	printf("Que posicion desea modificar?: \n");
	scanf("%d", &posicion);
	printf("Por que caracter desea cambiarlo?: \n");
	scanf(" %c", &caracter);
	if (posicion > 0){
		palabra[posicion] = caracter;
		printf("La palabra resultante es: %s\n", palabra);
	}else{
			printf("No ha cambiado ningún caracter.\n");
		}
	
return 0;	

}
