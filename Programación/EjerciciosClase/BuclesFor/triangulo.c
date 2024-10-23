#include<stdio.h>
#include<stdlib.h>
int main(){
	int cantidad;
	char asteriscos;
	printf("De cuantos numeros deseas el triangulo de nmumeros?: ");
	scanf("%d", &cantidad);
	for (int fila = 1 ; fila <= cantidad ; fila++){
		for(int columnas = 1; columnas <= fila ; columnas++){
			printf("%d", columnas);
		}
	printf("\n");
}
printf("\n");
}
