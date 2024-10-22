#include<stdio.h>
#include<stdlib.h>

int main(){
	char palabra[11];
	int posicion;
	printf("Introduzca una palabra de 10 caracteres\n");
	scanf("%s", palabra);
	printf("Que posicion desea modificar?: \n");
	scanf("%d", posicion);
	if (posicion == 1){
		palabra[posicion] = 'a';
		else{
			printf("No ha cambiado ningún caracter.");
		}
	}
	

}
