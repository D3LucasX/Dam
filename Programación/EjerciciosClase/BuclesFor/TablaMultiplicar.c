#include<stdio.h>
#include<stdlib.h>
int main(){
	int multi = 5;
	int resultado;
	for (int num = 1; num <= 10 ; num++){
		printf("%d * %d =", multi, num);
		resultado = multi * num;
		printf("%d\n", resultado);		
	}
	return 0;

}
