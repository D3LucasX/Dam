#include<stdio.h>
#include<stdlib.h>
int main(){
	int opcion = 0;  //Es necesario inicializarla, que no obligatorio, 
			 //porque el primer usoo de la variable es de lectura.

	while(opcion != 4){
		//codigo a ejecutar

		printf("Introduce una opcion: (4para salir\n)");
		scanf("%d", &opcion);
		printf("Ejecuta una operacion");
	}
	return 0;
}
