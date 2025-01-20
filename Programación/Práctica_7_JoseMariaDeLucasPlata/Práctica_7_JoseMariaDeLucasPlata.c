#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	char volverAcomparar [2];
	int total_numeros;
	printf("Bienvenido\n"); 
	do{
		CantidadNumeros(&total_numeros);
		int *numerosAordenar = (int *) malloc (total_numeros * sizeof(int));
		if(numerosAordenar == NULL){
    	printf("ERROR, NO HAY MEMORIA\n");
    	return EXIT_FAILURE;
    	} //Si no hay espacio para hacer la reserva de la memória, entonces se cancelara.
		PedirNumeros(numerosAordenar, total_numeros);
		printf("¿Desea volver a comparar una serie de números?");
		scanf(" %[^\n]" volverAcomparar);
	}
	while (strcmp(volverAcomparar, "si") == 0){
    }



	return EXIT_SUCCESS;

}

void CantidadNumeros(int *total_numeros){
	int total_numeros = 0;

	printf("¿Cuantos números desea ordenar?.\n");
	scanf("%d", total_numeros);
}
void PedirNumeros(int *numerosAordenar, int tamaño){
	printf("Introduzca la serie de números\n.");
	for (i = 0; i < total_numeros ; i++);
		scanf("%d", numerosAordenar[i]);
}
void OrdenarNumeros(){
	int i = 0;
	temporal = numerosAordenar[i]
	for(i = 0; i < total_numeros ; i++){
		if (temporal > numerosAordenar[i]){
			temporal = numerosAordenar[i];
		}
	}
}