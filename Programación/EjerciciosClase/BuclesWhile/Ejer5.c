#include<stdio.h>
#include<stdlib.h>

int main(){
	int adivin = 99;

	int num;
	do{
	printf("Adivina el número del 1 al 100: ");
	scanf("%d", &num);

	
		if (num == adivin){
			printf("Has acertado!\n");
		}else{
			printf("Has fallado\n");
		}
	}while(num != adivin);

	return 0;
}
