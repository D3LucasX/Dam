#include<stdio.h>
#include<stdlib.h>
/*
 *
 *
 */


int main(){
	int Calificacion;

		printf("¿Que nota has sacado?: ");
		scanf("%d", &Calificacion);
		  (Calificacion >= 5) ? printf("Aprobado\n") : printf("Suspenso\n");
		return 0;

}
