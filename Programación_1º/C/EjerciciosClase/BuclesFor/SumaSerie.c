#include<stdio.h>
#include<stdlib.h>
int main(){
	int numero, resultado;
	int vueltas;
	printf("Introduce un número: \n");
	scanf("%d", &numero);
	printf("La serie de sumas de %d =", numero);
	for (vueltas = 1 ; vueltas <= numero ; vueltas += 1){
	if (vueltas != numero){
		printf("%d + ", vueltas);
	}else {
		printf("%d\n", numero);
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

