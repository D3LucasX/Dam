#include<stdio.h>                                                                                     
#include<stdlib.h>          
#include<math.h>      
int es_mayuscula(char letra){   
	if (letra >= 'A' && letra <= 'Z'){	//Hacemos una condicion de que si la letra va desde la A hasta la Z que este bien.
		return 1;


	}else {
		return 0;

	}
}
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
			//No lo hemos visto en clase pero he buscado como hacerlo, y una opcion es usando las funciones recursiva, que basicamente es una función que se llama dentro de su propia función. 
		}
	}
	unsigned long long resultado = calcular(num);
	printf("El factorial de %d es: %llu\n", num, resultado);
}
int encontrar_maximo(int num1, int num2){	//Hacemos una condicion en la función que imprima que numero de los dos es mayor. 

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

double convertir_celsius_a_fahrenheit(double celsius){	//Es una funcion que te hace la fórmula matemática de pasar de celsius a Fahrenheit, y te guarda el resultado en el return.
	double resultado = (celsius * 9/5) + 32;
        return resultado;
}	
void intercambiar_numeros(){	//Es una funcion, que te imprime en pantalla el orden de los dos numeros que introduces invertido.
	int num1, num2;
	printf("Introduce el primer numero que quieras intercambiar: \n");
	scanf("%d", &num1);
	printf("Introduce el segundo número que quieras intercambiar: \n");
	printf("Despúes de intercambiar, el primer número es %d, y el segundo nuúmero es %d.\n", num2, num1);
}

double calcular_potencia(double  base, int exponente){
	if (exponente < 0){
		printf("El ejercicio no esta pensado para números negativos");
		return 0;
	}
		if (exponente == 0){
			return 1;
		}else if(exponente > 0) {
			 return base * calcular_potencia(base, exponente-1);
					}else { return 1 / (calcular_potencia(base, -exponente));
					}
			//No lo hemos visto en clase pero he buscado como hacerlo, y una opcion es usando las funciones recursiva, que basicamente es una función que se llama dentro de su propia función. 
		}
int main(){
	int menu;
	double area, radio, lado;
	printf("¿Que opcion desea realizar?\n\
			1. Mayuscula o Minúscula\n\
			2. Calcular factorial\n\
			3. ¿Cual es mayor?\n\
			4. Convertir de Celsius a Fahernheit.\n\
			5. Intercambiar números.\n\
			6. Calcular la potencia de un número.\n\
			7. Salir\n");
	printf("Opción: \n");
	scanf("%d", &menu);
	switch (menu){
		case 1:
			printf("Que letra desea comprobar? \n");
			char letra;
			scanf(" %c", &letra);
			if (es_mayuscula(letra)){
				printf("La letra %c es Mayúscula", letra);	//Aqui si la funcion es Mayúscula imprime que la letra es Mayúscula
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
			printf("De que número desea calcular la potencia?; \n");
			scanf("%lf", &base);
			printf("Cual el exponente de la base?: \n");
			scanf("%d", &exponente);
			
			resultado = calcular_potencia(base, exponente);
			printf("El resultado de %2.lf elevado a %d es %2.lf\n", base, exponente, resultado);
			break;
		case 7:
			printf("Ha elegido la opcion de salir del sistema, hasta pronto!!\n");

		default:
			printf("Elecció no válida\n");
			break;

	}
	return 0;
}
