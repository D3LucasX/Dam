#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void es_vocal(char letra){
	if (letra != 'A' && letra != 'a' && letra != 'E' && letra != 'e' && letra != 'I' && letra != 'i' && letra != 'O' && letra != 'o' && letra != 'U' && letra != 'u'){
		printf("La letra %c no es una vocal\n", letra);

	}else {
		printf("La letra %c es una vocal\n", letra);

	}
}
void calcular_area_figura(double radio, double area){
	area = M_PI * pow(radio, 2);
	printf("El area del circulo con radio %.2lf es: %.2lf\n", radio, area);
}

void calcular_area_figura_2(double lado, double area){
	area = lado * lado;
	printf("El area del cuadrado con lado %.2lf es; %.2lf\n", lado, area);
}

void calcular_area(){
	printf("¿De que figura desea calcular el area?\n");
	printf("1. Círculo\n");
	printf("2. Cuadrado\n");
	printf("Opción: ");
	int opcion_area;
	scanf("%d", &opcion_area);
	double area;
	if (opcion_area == 1){
		int opcion_area;
		printf("ingrese el radio del circulo: ");
		double radio;
		scanf("%lf", &radio);
		if (radio > 0){
			calcular_area_figura(radio, area);
		}else{
			printf("El radio debe de ser un número positivo\n");


		}
	}else if (opcion_area == 2){
		printf("Ingrese el valor del lado: \n");
		double lado;
		scanf("%lf", &lado);
		if (lado > 0){
			calcular_area_figura_2(lado, area);
		}else{
			printf("El valor del lado debe de ser un número positivo");
		}
	}else{
		printf("Eleccion incorrecta\n");
	}
}
double promedioDeTres(double num1, double num2, double num3){
	return (num1 + num2 + num3)/3;
}
double promedioDeCuatro(double num1, double num2, double num3, double num4){
	return (num1 + num2 + num3 + num4)/4;
}
void calcular_promedio(int opcion, double num1, double num2, double num3, double num4){
	if(opcion == 1){
		double promedio = promedioDeTres(num1, num2, num3);
		printf("El resultado del calculo del promedio de tres valores es: %.2lf\n ", promedio);
	}else if (opcion == 2){
		double promedio = promedioDeCuatro(num1, num2, num3, num4);

		printf("El resultado del calculo del promedio de cuatro valores es: %.2lf\n ", promedio);
	}else {
		printf("Opción no valida\n");
	}
}
void convertir_hora_24_a_12(){
	int Hora;
	printf("Ingrese la hora en formato 24h para cambiarla a formato 12h: ");
	scanf("%D", Hora);
	if (Hora !> 13 && Hora !< 24){
		printf("El valor introducido no es correcto.");
	}else {
		printf("La hora que has introducido es: %d");
	}
	int HoraPm = hora - 12;
	printf("La hora que has introducido transformada a formato 12H es: ", HoraPm);

}
int main(){
	int menu;
	char letra;
	double area, radio, lado;
	printf("Que opcion desea realizar\n");
	printf("1. Vocal\n");
	printf("2. Calcular área\n");
	printf("3. Calcular promedio\n");
	printf("Opción: ");
	scanf("%d", &menu);
	switch (menu){
		case 1:
			printf("Que letra desea comprobar? \n");
			scanf(" %c", &letra);
			es_vocal(letra);
			break;
		case 2:
			calcular_area();
			break; 

		case 3:
			int opcion;
			printf("Elija una opción: \n");
			printf("1. Calcular el promedio de 3 números.\n");
			printf("2. Calcular el promedio de 4 números.\n");
			printf("Opción: ");
			scanf("%d", &opcion);
			if (opcion == 1){
				double num1, num2, num3;
				printf("Introduzca el primer valor\n");
				scanf("%lf", &num1);

				printf("Introduzca el segundo valor\n");
				scanf("%lf", &num2);

				printf("Introduzca el tercer valor\n");
				scanf("%lf", &num3);
				calcular_promedio(opcion, num2, num2, num3, 0);
			}else if (opcion == 2){
				double num1, num2, num3, num4;

				printf("Introduzca el primer valor\n");
				scanf("%lf", &num1);

				printf("Introduzca el segundo valor\n");
				scanf("%lf", &num2);

				printf("Introduzca el tercer valor\n");
				scanf("%lf", &num3);

				printf("Introduzca el cuarto valor\n");
				scanf("%lf", &num4);
				calcular_promedio(opcion, num1, num2, num3, num4);
			}else{
				printf("Opción no válida\n");
			}break;
		case 4:

			convertir_hora_24_a_12(){
				break; 

				default:
					printf("Elecció no válida\n");
					break;
			}		
			return 0;
	}

