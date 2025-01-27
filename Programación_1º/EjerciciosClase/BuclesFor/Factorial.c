#include<stdio.h>
#include<stdlib.h>
int main(){
	float factorial, resultado;
	int numero;
	resultado = 1;
	printf("De que número desea calular el factorial? \n");
	scanf("%f", &factorial);
	printf("%.0f f! =", factorial);
	for (numero = factorial ; numero >= 1 ; numero -= 1 ){
		resultado = numero * resultado;
		if (numero != 1){
		printf("%d * ", numero);
		}else{
			printf("1 = %.0f\n", resultado);
		}
	
	}

}
/* for (int i = 1 ; i <= num ; i++){
	 resultado = resultado * i;
}
printf("%d! = %d\n");		// esto va hacia arriba
return o;


for (int i = 1 ; i > 1 ; i--){
	 resultado = resultado * i;
}
printf("%d! = %d\n");		// esto va hacia abajo.
return o; */

