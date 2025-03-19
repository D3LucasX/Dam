#include<stdio.h>
#include<stdlib.h>
int main(){
	int cantidad;
	char asteriscos;
	printf("Cuantos asteriscos desea por lado?: ");
	scanf("%d", &cantidad);
	for (int vueltas = 0 ; vueltas < cantidad ; vueltas++){
		for(int columnas = 0; columnas < cantidad ; columnas++){
			printf(" * ");
		}
	printf("\n");
}
}
