#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
typedef struct{
	char nombre[7][20];
	float tempe[7];
}Temperatura;


void IngresoDatos(Temperatura *semana){
	printf("Ingrese los datos de los dias y las temperaturas que quieras registrar\n");
	for(int i = 0; i < 7; i++){
	printf("Dia %d: \n", i + 1 );
	scanf("%s", semana->nombre[i]);
	printf("temperatura del %s: \n", semana->nombre[i]);
	scanf("%f", &semana->tempe[i]);
	}
}


void CalcularPromedio(Temperatura *semana){
	int i;
	float promedio = 0;
	for(i = 0; i < 7; i++){
	promedio += semana->tempe[i];
	}
	promedio /= i;

	printf("El promedio de temperatura de los dias que registraste es de: %.2f\n", promedio);
}


void Mayor(Temperatura *semana){
	int i;
	float maxima = semana->tempe[0]; // pongo la posicion exacta, porque estaba poniendo i, que es igual a 0 y me daba coredump
	int diaMaxima;
	for(i = 1; i < 7; i++){
	if(semana->tempe[i] > maxima){
	maxima = semana->tempe[i];
	diaMaxima = i;
}
}

		printf("La temperatura máxima sera el dia %s con %.2fºC\n", semana->nombre[diaMaxima], maxima);
}

void Menor(Temperatura *semana){

	int i;
	float minima = semana->tempe[0];
	int diaMinima;
	for(i = 1; i < 7; i++){
	if(semana->tempe[i] < minima){
	minima = semana->tempe[i];
	diaMinima = i;
}
}

		printf("La temperatura mínima sera el dia %s con %.2fºC\n", semana->nombre[diaMinima], minima);
}
int main (){
	int i = 0;
	Temperatura semana;

	IngresoDatos(&semana);
	printf("\nLos datos ingresados\n");
	for(i = 0; i < 7; i++){
		printf("Dia %d: %s - %.2fºC\n", i + 1, semana.nombre[i], semana.tempe[i]);
	}

	CalcularPromedio(&semana);
	
	Mayor(&semana);
	
	Menor(&semana);



	return EXIT_SUCCESS;

}
