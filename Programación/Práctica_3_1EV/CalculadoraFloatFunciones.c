#include<stdio.h>
#include<stdlib.h>
/*
 *		Autor: Jose Maria DE Lucas Plata.
 *	Ejercicio_1, Práctica3, Crea una calculadora de floats con cada operación en una función.
 *
 */
float Suma(float num1, float num2){
	float Resultado = num1 + num2;    //Declaro la función de la Suma.

	    return Resultado;
}
float Resta(float num1, float num2){
	float Resultado = num1 - num2;	//Declaro la función de la Resta.
	    
	    return Resultado;
}
float Multiplicación(float num1, float num2){
	float Resultado = num1 * num2;	//Declaro la función de la Multiplicación.

	    return Resultado;
}
float División(float num1, float num2){
	float Resultado = num1 / num2;	//Declaro la función de la División.

	    return Resultado;


}
int main(){
	float num1, num2;
	printf("Introduzca el valor del primer número\n");
	scanf("%f", &num1);
	printf("Introduzca el valor del segundo numero\n");
	scanf("%f", &num2);
	float suma = Suma(num1, num2);
	float resta = Resta(num1, num2);			//Llamo a las funciones.
	float multiplicación = Multiplicación(num1,num2);
	float división = División(num1, num2);
            printf("El resultado de su suma es: %.2f\n", suma);
            printf("El resultado de su resta es: %.2f\n", resta);
	    printf("El resultado de su multiplicación es: %.2f\n", multiplicación);
	    printf("El resultado de su división es: %.2f\n", división);
	   
	    return 0;

}
