#include<stdio.h>
#include<stdlib.h>

int main(){
	int num;
	do{
		printf("Introduce un número: ");
		scanf("%d", &num);

	}while(num >= 0);
	printf("No se permiten números negativos.\n");	
	return 0;
}
