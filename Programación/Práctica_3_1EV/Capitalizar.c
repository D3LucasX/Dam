#include<stdio.h>
#include<stdlib.h>
/*
 *
 *		Autor Jose Maria De Lucas Plata
 *		Ejercicio2, Práctica3, Transforma una letra minúscula en una letra mayúscula.
 */
char capitalizar(char mini, int mayus){
	int Resultado = mini - mayus;  //Declaro la funcion 

	return Resultado;
}

int main(){
	char mini;
	int mayus = 32;

	  printf("Escribe la letra que quieras capitalizar por favor: ");
	  scanf("%c", &mini);

	    char mayúscula = capitalizar(mini, mayus);		//Llamo a la función.
	    printf("La letra resultante es: %c\n", mayúscula);
	      
	      return 0;

}
