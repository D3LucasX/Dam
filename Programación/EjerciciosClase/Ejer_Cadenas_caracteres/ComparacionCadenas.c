#include<stdio.h>
#include<stdlib.h>

int main(){
	char palabra[100];						//Nunca seran iguales por que las direcciones de memoria nunca van a ser las mismas
									//entonces lo esperable es que siempre la segunda palabra sera mas mayor que la primera ya que 
									//estara guardada en una posición mas avanzada de la memoria por lo tanto sera mayor.
	char palabra2[100];
	printf("Introduzca una palabra\n");
	scanf("%s", palabra);

	printf("Introduzca la misma palabra\n");
	scanf(" %s", palabra2);
	if (palabra == palabra2){
		printf("son iguales\n");
	}else{
		printf("no son iguales\n");
	}
	if(palabra < palabra2){
		printf("La palabra %s es menor que la palabra %s\n", palabra, palabra2);
	}else{
		printf("La palabra %s es mayor que la palabra %s\n", palabra2, palabra);
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
// para la compàracion con los bucles:
// 	for (int i = 0; i< 8; i++){
// 		if (palabra[1] == palabra2 [1]){
//
// 		}
// 	}
