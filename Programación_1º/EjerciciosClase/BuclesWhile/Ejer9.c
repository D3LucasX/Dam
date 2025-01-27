#include<stdio.h>
#include<stdlib.h>

int main(){
	int num = 3;
	int limite = 100;
	do{
		
		printf("%d", num);
		num += 3;
		if (num <= limite){
		printf(",");
	}

	}while(num < limite);
	printf(".");
	return 0;
}
