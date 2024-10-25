#include<stdio.h>
#include<stdlib.h>
int main(){
	int opcion; // No es necesaario darle un vañor 
		    // porque el primer uso de la variable es 
		    // de escritura.

	do{
		//codigo a ejecutar

		printf("Introduce una opcion: (4para salir\n)");
		scanf("%d", &opcion);
		printf("Ejecuta una operacion");
	}while (opcion != 4); 
	return 0;
}
