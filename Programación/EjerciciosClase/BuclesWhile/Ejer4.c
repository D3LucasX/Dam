#include<stdio.h>
#include<stdlib.h>

int main(){

	int num;
	printf("Introduce un numero de dos cifras: ");
	scanf("%d", &num);
		int contador;
		printf("El numero al reves es: ");
		if (num == 0){
		contador = 1;
		}else{
			while(num != 0){
				num /= 10;
				contador++;
			}
		}
		printf("El número tiene %d dígitos.\n", contador);

	return 0;
}
