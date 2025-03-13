#include<stdio.h>
#include<stdlib.h>
int main(){
	int contadorDivisores = 0, num;
	printf("Introduce un número: ");
	scanf("%d", &num);
	for (int i = 1 ; i <= num ; i++){
		if (num % i == 0){
			contadorDivisores++;
		}
		}
	printf("El número %d tiene %d divisores.\n", num, contadorDivisores);
}
