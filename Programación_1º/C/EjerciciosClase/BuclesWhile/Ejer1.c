#include<stdio.h>
#include<stdlib.h>

int main(){
	int numero = 10;
	do {
		printf("%d\n", numero);
		numero -= 1;
	}while(numero != 1);	//Acuerdate de poner el doble igual en las comparaciones.
				//El bucle se repite cuando el numero que sale en el do no es 
				//igual a 1.
	return 0;

}
