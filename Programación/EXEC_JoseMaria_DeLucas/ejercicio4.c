#include<stdio.h>
#include<stdlib.h>
int main(){
	int numero, resultado;
	int vueltas;
	int suma = 0;
	scanf("%d", &numero);
	for (vueltas = 1 ; vueltas <= numero ; vueltas += 1){
	if (vueltas != numero){
		suma += vueltas;
	}else {
		suma += numero;
		printf("La suma de los números ingresados es %d", suma );
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

