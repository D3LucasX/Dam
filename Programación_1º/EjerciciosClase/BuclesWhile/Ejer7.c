#include<stdio.h>
#include<stdlib.h>

int main(){
	int num;
	int suma = 0;
	while (1){

		printf("Introduce numeros positivos: ");
		scanf("%d", &num);
		if (num % 2 != 0){
			break;

		}
		suma += num;
	}
	printf("La suma de los numeros pares introducidos es: %d\n", suma);	
	return 0;
}
