#include<stdio.h>
#include<stdlib.h>

int main(){

	int num;
	printf("Introduce un numero de dos cifras: ");
	scanf("%d", &num);
		int resultado;
		int divisor = 10;
		int resto;

		printf("El numero al reves es: ");

	do {

	       	resto = num % divisor;	
		num = num / divisor;
		printf("%d", resto);
	}while(num != 0);
printf("\n");	
	return 0;
}
