#include<stdio.h>
#include<stdlib.h>

int main(){
	int num;
	printf("Introduzca un numero");
	dcanf("%d", &num);
	if(num % 2 == 0){
		printf("El número %d es par.\n", num);
	}else{
		printf("El numero %d es impar.\n", num);
	}
	return EXIT_SUCCESS;

}
