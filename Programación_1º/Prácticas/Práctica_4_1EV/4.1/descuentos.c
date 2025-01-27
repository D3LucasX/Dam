#include<stdio.h>
#include<stdlib.h>
/*
 **
 **              Autor: Jose Maria De Lucas Plata
 **              Ejercicio_3, Practica_4
 */
int main(){
	float valor;
	float DP = 0.1;
	float DE = 0.15;
	char rol;
	printf("introduzca el importe de su compra: ");
	scanf("%f", &valor);

	getchar();
	  
	  printf("¿Cual es su rol en el centro?: (p: profesor, e: estudiante, o: otro)");
	  scanf("%c", &rol);

	     if (rol == 'p'){
		    float DesPro = valor * DP;
		    float Profesor = valor - DesPro;
		    printf("El valor resultante es: %.2f\n", Profesor);

	    }else if (rol == 'e' ){
		    float DesEst = valor * DE;
		    float Estudiante = valor - DesEst;
		    printf("El resultado de su resta es: %.2f\n", Estudiante);		    

	    }else {
		    printf("No se le puede aplicar ningun descuento");
	    
	    }
		     return 0;

}
