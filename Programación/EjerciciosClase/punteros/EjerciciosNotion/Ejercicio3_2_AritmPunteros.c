#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){

	//## Para imprimir de atras, hacia delante.
	
	/*long x[5] = {10,20,30,40,50};
	long * p = x + 4;// aqui movemos al puntero a la última posición
			 // del array. Nos vamos a la ultima posicion con un 4
			 // y no con un 5, ya que si nos encontramos en la 
			 // posicion numero1, mas 5, te sales del array.
	for(int i = 5; i > 0; i--){

		printf("Elemento %d: %ld\n",i, *p);
		p--;*/

	long x[5] = {10,20,30,40,50};  //El tipo de variable y de puntero
				       //han de ser iguales, ya que  si no, 
				       //no te imprimira lo que quieres
				       //ya que un long el espacio de memoria
				       //que reserva es de 8 bits
				       //mientras que un int o un float
				       //el espacio de memoria que reserva es de
				       //4 bits.
	long * p = x;
	//Apuntamos a la posicion 1 del array.
	for(int i = 0; i < 5; i++){

		printf("Elemento %d: %ld\n",i+1, *p);//*p es el contenido de p.
		p++; //p = posicion 1 del array, la incrementamos para que 
		     //apunte a la siguiente.
	}


	return EXIT_SUCCESS;

}
