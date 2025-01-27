#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	double raiz;
	int valor;

	double radio, area;
	
	//PARTE DEL CÁLCULO DE LA RAIZ CUADRADA
	printf("Introduzca un número para calcular su raiz\n");
	scanf("%d", &valor);
	raiz = sqrt(valor);
	printf("La raiz cuadrada de %d es %lf\n", valor, raiz);
	
	//Parte del cálculo del area del circulo.
	printf("introduzca el radio del circulo para calcular su area\n");
	scanf("%lf", &radio);
	area = radio * radio * M_PI; //es una constante definida en math.h con el valor de pi
	printf("El area del circulo es %lf", area);

	return 0;


}
