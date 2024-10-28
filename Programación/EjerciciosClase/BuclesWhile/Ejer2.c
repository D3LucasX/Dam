#include<stdio.h>
#include<stdlib.h>

int main(){
	printf("Introduce un numero de dos cifras: ");
	scanf("%d", &num);
		int num;
		int resultado;
		int divisor = 10;
		int resto;

	do {
						// El resto de la primera vuelta lo guarda
						//en la variable resultado, cuando hace la variable resultado, y num pasa a ser el resto, suma resultado
						//que guarda el valor de la primera vuelta y se lo suma a el resto que guarda el digito de la segunda vuelta
						//y asi es como consigue sumar los dos digitos de dos numeros, pero funciona para hacerlo con los dígitos 
						//que sea.

	       	resto = num % divisor;	
		num = num / divisor;
		resultado = resultado + resto;
		
		printf("Dígito= %d\n", resto);
	}while(num != 0);	
		printf("EL resultado de la suma de los digitos es: %d\n", resultado);
	return 0;
}
