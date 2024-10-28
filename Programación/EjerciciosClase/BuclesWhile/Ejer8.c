#include<stdio.h>
#include<stdlib.h>

int main(){
	int num;
	int contador = 0;
	float suma = 0.0;
	while (1){

		printf("Introduce numeros positivos: ");
		scanf("%d", &num);
		if (num < 0){
			break;
		}
		suma += num;
		contador++;
		//De esta manera, si introducimos un número negativo
		//el bucle se cierra dando salida al print del if,
		//ya que contador esta iniciado en 0, por lo tanto
		//al no haber introducido ningún número positivo
		//este no aumenta y al contador valer 0, te imprime
		//que no hay numeros positivos.
		//
		//Y al introducir números positivos, la variable suma,
		//se suma a la variable num y se le asigna el resultado
		//a la variable suma, de esta manera por cada vuelta que
		//da, va sumando todos los números que el usuario ha introducido
		//y el resultado lo va asignando en la variable suma.

	}
	if (contador == 0){
		printf("no hay números positivos.\n");
	}else{
	printf("El promedio de los numeros positivos es: %.2f\n", suma / contador);	}
	//Despues de que ha introducido numeros positivos, cuando introduce
	//un número negativo, se cumple la condicion del while y saldría del bucle
	//entonces al no poderse cumplir la condicion del if, se cumple la del else
	//y te imprime el resultado añadiendo la operacion dentro del printf.
	return 0;
}
