#include<stdio.h>
#include<stdlib.h>

int main(){
	int num;
	printf("Introduce un numero de dos cifras: ");
	scanf("%d", &num);
		int dig1;
		int dig2;
		int resultado;
		int divisor = 10;
		int resto;

	do {
	       	resto = num % divisor;
		num = num / divisor;
		
		printf("El resultado de la suma d los dos dígitos es = %d", resto);
	}while(num != 0);	//Acuerdate de poner el doble igual en las comparaciones.
				//El bucle se repite cuando el numero que sale en el do no es 
				//igual a 1.
	return 0;

}
/*
 * lo que hay que hacer es dividir el num entre 10,*/ 
