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
void _calcular_area_figura(double radio, double area){
	area = M_PI * pow(radio, 2);
	printf("El area del circulo con radio %.2lf es: %.2lf\n", radio, area);
}

void _calcular_area_figura_2(double lado, double area){
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
			_calcular_area_figura(radio, area);
		}else{
			printf("El radio debe de ser un número positivo\n");


		}
	}else if (opcion_area == 2){
		printf("Ingrese el valor del lado: \n");
		double lado;
		scanf("%lf", &lado);
		if (lado > 0){
			_calcular_area_figura_2(lado, area);
		}else{
			printf("El valor del lado debe de ser un número positivo");
		}
	}else{
		printf("Eleccion incorrecta\n");
	}
}
void promedioDeTres(double num1, double num2, double num3){

	printf("Introduzca el primer valor\n");
	scanf("%lf", &num1);

	printf("Introduzca el segundo valor\n");
	scanf("%lf", &num2);

	printf("Introduzca el tercer valor\n");
	scanf("%lf", &num3);
	double resultado = (num1 + num2 + num3)/3;
	printf("El resultado del promedio de tres numeros es: %lf\n", resultado);
}
void promedioDeCuatro(double num1, double num2, double num3, double num4){

	printf("Introduzca el primer valor\n");
	scanf("%lf", &num1);

	printf("Introduzca el segundo valor\n");
	scanf("%lf", &num2);

	printf("Introduzca el tercer valor\n");
	scanf("%lf", &num3);

	printf("Introduzca el cuarto valor\n");
	scanf("%lf", &num4);
	double resultado = (num1 + num2 + num3 + num4)/4;
	printf("El resultado del promedio de cuatro números es: %lf\n", resultado);
}

void calcular_promedio(){

	int opcion;
	double num1, num2, num3, num4;
	printf("¿De cuantos números quieres hacer el promedio?\n");
	scanf("%d", &opcion);
	if (opcion != 1 && opcion != 2){
		printf("La opcion no es válida");
	}else{
		if (opcion == 1){
			promedioDeTres(num2, num2, num3);
		}else if (opcion == 2){;

			promedioDeCuatro(num1, num2, num3, num4);
		}else{
			printf("Operacion no válida");
		}
	}
}
void convertir_hora_24_a_12(){
	int Hora;
	printf("Ingrese la hora en formato 24h para cambiarla a formato 12h: \n");
	scanf("%d", &Hora);
	if (Hora < 13 && Hora > 24){
		printf("El valor introducido no es correcto.\n");
	}else {
		printf("La hora que has introducido es: %d\n", Hora);

		int HoraPm = Hora - 12;
		printf("La hora que has introducido transformada a formato 12H es: %d\n", HoraPm);
	}

}
void es_primo(){
	int numP;
	printf("Introduce el numero que quieras revisar\n");
	scanf("%d", &numP);
	if (numP < 0 || numP > 10){
		printf("No podemos comprobar ese número");
	}else {
		printf("El numero que desea comprobar es:%d\n", numP);
	}
	if (numP == 2 || numP == 3 || numP == 5 || numP == 7){
		printf("El número %d es un número primo\n", numP);
	}else{
		printf("El número %d no es un número primo\n", numP);
	}

}
void comparar_3_numeros(){
	int num1, num2, num3;
	printf("Ingrese el primer numero que desea comparar: \n");
	scanf("%d", &num1);

	printf("Ingrese el segundo numero que desea comparar: \n");
	scanf("%d", &num2);

	printf("Ingrese el tercer numero que desea comparar: \n");
	scanf("%d", &num3);
	if (num1 > num2 && num1 > num3){
		printf("El número %d es el mayor\n", num1);
	}else if (num2 > num1 && num2 > num3){
		printf("El número %d es el mayor\n", num2);
	}else if(num3 > num1 && num3 > num2){
		printf("El número %d es el mayor\n", num3);
	}else{
		printf("Los tres números son iguales");
	}

}
int main(){
	int menu;
	char letra;
	double area, radio, lado;
	printf("¿Que opcion desea realizar?\n\
			1. Vocal\n\
			2. Calcular área\n\
			3. Calcular promedio\n\
			4. Cambio de Formato de Hora\n\
			5. Es Primo.\n\
			6. Comparación de tres números\n\
			7. Salir\n");
	printf("Opción: \n");
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
			calcular_promedio();
			break;
		case 4:

			convertir_hora_24_a_12();
			break;
		case 5:
			es_primo();
			break;
		case 6:
			comparar_3_numeros();
			break;
		case 7:
			printf("Ha elegido la opcion de salir del sistema, hasta pronto!!\n");

		default:
			printf("Elecció no válida\n");
			break;

	}		
	return 0;
}

