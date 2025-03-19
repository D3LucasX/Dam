#include<stdio.h>
#include<stdlib.h>

int main(){
	int num, contador = 1;
	printf("Introduce la secuenca de numeros que va del 1 al 10.\n");
	do{
		scanf("%d", &num);
		if (num != contador){
		printf("No ha escrito el numero en el orden adecuado, saliendo del programa.\n");
		}
		}
		contador++;
	}while (num <= 9);
	printf("Genial!, intridujiste bien la secuencia!!\n");
	return 0;
}
