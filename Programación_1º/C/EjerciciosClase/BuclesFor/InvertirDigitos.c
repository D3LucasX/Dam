#include<stdio.h>
#include<stdlib.h>
int main(){
	int suma = 0;
	for (int num = 1; num <= 10 ; num++){
		printf("%d + %d =", suma, num);
		suma += num;
		printf("%d\n", suma);		
	}
	return 0;

}
