#include<stdio.h>                                                                                     
#include<stdlib.h>          
      
int es_mayuscula(char letra){   
	if (letra >= 'A' && letra <= 'Z'){
		return 1;


	}else {
		return 0;

	}
}
// En esta funcion hacemos una condicion de que si el usuario escribe una letra que este en el rango de la A a la Z, estara bien y se ejecutara en el main.
void calcular_factorial(int num){
	if (num < 0){
		printf("El ejercicio no esta pensado para números negativos");
		return;
	}
	unsigned long long calcular(int num){
		if (num == 0){
			return 1;
		}else {
			return num * calcular(num-1);	 
		}
	}
	unsigned long long resultado = calcular(num);
	printf("El factorial de %d es: %llu\n", num, resultado);
}
//En esta funcion calculamos el factorial de un número haciendo uso de una funcion recursiva que se ejecuta dentro de la función. 
int encontrar_maximo(int num1, int num2){

	printf("Introduzca el primer valor\n");
	scanf("%d", &num1);

	printf("Introduzca el segundo valor\n");
	scanf("%d", &num2);
	if (num1 > num2){
		printf("El numero %d es mayo que %d:\n", num1, num2);
	}else{
		printf("El num %d es mayor que %d\n", num2, num1);
	}
	return 0;
}
//En esta función comparamos dos numeros y decimos cual es el mayor.

double convertir_celsius_a_fahrenheit(double celsius){
	double resultado = (celsius * 9/5) + 32;
	return resultado;
}
//En esta función convertimos de grados Celsius a grados Fahrenheit con la formula.
void intercambiar_numeros(){
	int num1, num2;
	printf("Introduce el primer numero que quieras intercambiar: \n");
	scanf("%d", &num1);
	printf("Introduce el segundo número que quieras intercambiar: \n");
	printf("Despúes de intercambiar, el primer número es %d, y el segundo nuúmero es %d.\n", num2, num1);
}
//En esta funcion intercambiamos el orden de los numeros en el printf.
double calcular_potencia(double  base, int exponente){
	if (exponente < 0){
		printf("El ejercicio no esta pensado para números negativos");
		return 0;
	}
		if (exponente == 0){
			return 1;
		}else if(exponente > 0) {
			return base * calcular_potencia(base, exponente-1);
					}else { 1 / (calcular_potencia(base, -exponente));
					}
					}
//en esta función calculamos la potencia de un número con una funcion recursiva. no esta acabado! no finciona.

					int main(){
					int menu;
					printf("¿Que opcion desea realizar?\n\
							1. Mayuscula o Minúscula\n\
							2. Calcular factorial\n\
							3. ¿Cual es mayor?\n\
							4. Convertir de Celsius a Fahernheit.\n\
							5. Intercambiar números.\n\
							6. Calcular la potencia de un número\n\
							7. Salir\n");
					printf("Opción: \n");
					scanf("%d", &menu);
					switch (menu){
					case 1:
					printf("Que letra desea comprobar? \n");
					char letra;
					scanf(" %c", &letra);
					if (es_mayuscula(letra)){
						printf("La letra %c es Mayúscula", letra);
					}else{
						printf("La letra %c no es una Mayúscula", letra);
					} 
					break;
					case 2:
					int num;
					printf("Introduce el numero no negativo: \n");
					scanf("%d", &num);

					calcular_factorial(num);
					break;

					case 3:
					int num1, num2;
					encontrar_maximo(num1, num2);
					break;
					case 4:
					double celsius;
					double resultado;
					printf("Introduce el numero que quieras pasar de celsius a fahrenheit; \n");
					scanf("%lf", &celsius);
					convertir_celsius_a_fahrenheit(celsius);
					printf("La temperatura en celsius es:%lf \n", celsius);
					printf("La temperatura en Fahrenheit es:%lf \n", resultado);
					break;
					case 5:
					intercambiar_numeros();
					break;
					case 6:
					double base;
					int exponente;
					printf("De que numero desea calcular la potencia: \n");
					scanf("%lf", &base);
					printf("Cual es su exponente?: \n");
					scanf("%d", &exponente);
					calcular_potencia(base, exponente);
					break;
					case 7:
					printf("Ha elegido la opcion de salir del sistema, hasta pronto!!\n");

					default:
					printf("Elecció no válida\n");
					break;

					}
					return 0;
					}
