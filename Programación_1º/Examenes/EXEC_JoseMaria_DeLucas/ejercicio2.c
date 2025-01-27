#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	int dia_semana = 0;
	scanf("%d", &dia_semana);
	if (dia_semana <= 0 || dia_semana > 7){
		printf("Número no válido.\n");
	}
	switch (dia_semana){
		case 1:
			printf("Hoy es Lunes.\n");
			break;
		case 2:
			
			printf("Hoy es Martes.\n");
			break;
		case 3:

			printf("Hoy es Miércoles.\n");
			break;
		case 4:
			
			printf("Hoy es Jueves.\n");
			break;
		case 5:

			printf("Hoy es Viernes.\n");
			break;
		case 6:

			printf("Hoy es Sábado.\n");
			break;
		case 7:

			printf("Hoy es Domingo.\n");
			break;
	}


	return EXIT_SUCCESS;

}
