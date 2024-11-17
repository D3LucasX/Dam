#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
typedef struct{
	char nombres [100][50];
	double notas[100];
}Notas;
Notas IngresoDeDatos(Notas alumnos, int NumeroAlumnos){
	for(int i = 0; i < NumeroAlumnos; i++){
	printf("Ingrese los datos del alumno número %d\n", i + 1);
	scanf(" %[^\n]", alumnos.nombres[i]);
	printf("Ingresa la nota media del alumno %d\n", i + 1);
	scanf("%lf", &alumnos.notas[i]);
	}
	return alumnos;
}

int main (){

	int NumeroAlumnos = 0;
	Notas alumnos;
	printf("¿Cuantos alumnos desea inscribir?\n");
	scanf("%d",&NumeroAlumnos);
	alumnos = IngresoDeDatos(alumnos, NumeroAlumnos);

	printf("Ingreso de datos: \n");
	for(int i = 0; i < NumeroAlumnos; i++){
	printf("%d. Alumno :%s - nota media: %.2f\n", i + 1, alumnos.nombres[i], alumnos.notas[i]);
	}


	return EXIT_SUCCESS;

}
