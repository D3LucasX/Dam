#include<stdio.h>
#include<stdlib.h>
/*
 *	Autor: Jose Maria De Lucas Plata
 *	Ejercicio_1 Práctica_4
 *
 */

int main(){
	int edad;

		printf("Cual es tu edad?: ");
		scanf("%d", &edad);
		if (edad < 12 ){  //Agregamos una serie de condiciones para determinar en que grupo se encuentra el usuario
			printf("eres menor de 12, entras en la categoria niño\n" );
		}
		if (edad > 12 && edad < 17 ){
			printf("Eres adolescente \n");
		}
		if(edad > 18 && edad < 64){
			printf("Eres adulto\n");
		}
		if(edad >= 65){
			printf("Eres una persona mayor");
		}
		return 0;

}
