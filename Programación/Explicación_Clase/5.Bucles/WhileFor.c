#include<stdio.h>
#include<stdlib.h>
int main(){
	int i = 0;
	for (/*valor inicial */ i = 0/* Esto como ya esta declarado, no haria falta escribirlo, o incluso podriamos declarar la variable aqui.*/; /* condicion */i < 5 ; i = i + 1/* codigo a ejecutar entre vueltas*/){
		/*De esta manera nunca imprimiria el 5, por que cuando llegara al 5, detectaria que es menor, asi que saldria del bucle, para que nos imprima el 5, deberiamos de poner '<=' o en vez de poner menor de 5, poner menor de 6.*/
	       printf("%d", i);
	       }
	printf("Terminado\n")
	/**
	 *
	 		1) inicializo en 0
			2) compruebo si i <5. Como se cumpple, ejecutando el iterior del buclew.
			3) Printf
			4)
			Terminado el interior del bucle, ejecutando el "codigo entre vueltas": i = i + 1
			5) Vuelvo al punto 2. Compruebo si i < 5. Se cumple porque i == 1. Ejecuto el interior.
			6) printf
			7)Termino el interior del bucle, ejecuto i = i + 1. Ahora i vale 2.
			8)Vuelvo a la condicion: ¿i <5?. si, Vuelve al interior del bucle.
			9)printf.
			19) y asi todo el rato hasta que sale del bucle. y haria lo que tenga que hacer cuando acabe el bucle.
	**/
			/**	Incrementos:
			 * 		Para incrementar de uno en uno, -->nombreVariable++ / nombre variable += 1 ( despues del igual diremos lo que vamos a incrementar)
			 * 	En los incrementos, en un printf, podemos hacer printf("d%", i++); --> aqui lo que nos haria es que nos imprimiria el numero antes de incrementarlo, si escribieramos ++i nos incrementaria el valor y despues nos imprimiria el numero incrementado.*/
		//Traduccion a while
		i=0;
		while (i<5){//condicion
			printf("%d", i);//El interior del for.
			i = i + 1; //Código entre vueltas.
		}
	printf("Terminado el while\n");
}
