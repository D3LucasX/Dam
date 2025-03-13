#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	//Reserva de memoria estática.
	int a = 10; // --> reserva 4 bites, espacio de memoria --> OX1A4
	int * p = &a; // --> reserva 4 bites a partir del último bite de int a. Espacio de memoria --> OX1A8
	// Al declarar una variable siempre se reservaa un espacio de memoria automáticamente, y el espacio ocupa sizeof(int)(int en este caso)
int func(){
	int a = 0;
	a++;
	return a; // Al retornar a, libera ese espacio de memoria
			  // al terminar la función porque, las variables que
			  // se crean en una función no existen en el main.
			  // Si en el main hago un print de ese espacio de memoria,
			  // si que contendria el 1, pero no se deberia hacer ya que ese
			  // espacio de memoria no este reservado ya para el programa 
			  // ya que fué liberado.
			  // Pero el espacio de memoria que se utilizó en 
			  // la función si que guarda a++, que seria 1, lo unico
			  // que este espacio de memoria no estaria reservado para
			  // nuestro programa.

			  // En una funcion void, el espacio de memoria se libera al cerrarse la llave
			  // de la función.


			  // Los espacios de memoria del main, al acabar el programa tambien se 
			  // libera . 
}

	// Mmoria estática pero con un array.
	Libro a = {1, "T", "Autor", 13, 0, 10}; //--> Automáticamente reserva en memoria
											//    un sizeof(Libro)( /*que es lo que ocupa un libro con todos sus elementos*/ ); == a sizeof(int) + (2 x sizeof(char)) + (6 x sizeof(char) + sizeoff(float).... etc. sizeoff(Libro)

	Libro * p = &a; // --> Se guarda en el siguiente espacio de memoria, y contiene la direccion de memoria del primer elemento
					//	   del libro, que en este caso es un int, asi que guarda 4 bits.
	void añadirLibro(){
		Libro * p = malloc /*Memory allocation*/(sizeof(libro)); // Esto te reserva el espacio necesario para añadir un libro.
		p -> id = 5; // Esto iria a la memoria que reservamos donde guardaria el id, y guardaría el id en ese espacio de memoria.
		p->stock = 7; // Esto iria al espacio de memoria donde se guardaria el stock del nuevo libro.
		/*Así hasta que introduzcas todos los valores que tiene un Libro(array de valores)*/


		/*LOS ESPACIOS DE MEMORIA RESERVADOS MANUALMENTE, NO SE LIBERA AUTOMATICAMENTE, HAY QUE HACERLO MANUALMENTE CON UNA FUNCIÓN, OJO !!!!*/
		/*SE LIBERA CUN UNA FUNCION QUE SE LLAMA FREE*/    /*QUE SE ESCRIBIRIA EN ESTE EJEMPLO free(p);*/

		/*Lo que creas en las funciones, al reservar espacios de memoria si que siguen existiendo en en la memoria, el puntero que creas en la funcion
		si que deja de existir, pero lo que has reservado y sus datos no dejan de existir*/
		/*Entonces, la memoria dinamica habria que liberarla manualmente en el final de nuestro main, para que no se quede guardado para siempre,
		ya que el año que viene veremos como guardar esa informacion para mantenerla para siempre y con el free libera el espacio de memoria sizeof(libro)
		que sería free(p); */

		/*Ahora P apuntaría al primer elemento de el nuevo Libro, si vuelves a poner a p apuntando en un libro que ya teniamos, si no has guardado el nuevo libro en 
		una variable, o en el array de los otros libros que ya tenias creado, ya no podras acceder a ese libro, aun que seguiría ahí*/


	// Memoria dinamica de 40 libros
	int main(){
		Libro * Catalogo = malloc (sizeof(Libro)*40) // Reserva un libro 40 veces.
		MostrarLibro(Catalogo); //Imprime el primer libro
		MostrarLibro(Catalogo + 3); //Imprime el cuarto libro, que en realidad ese 3 es 3 x sizeof(libro), por eso pasa de libro, y no te dice el autor.
		//Para introducir un libro nuevo deberiamos de hacerlo con realloc, que libera el array de los 40 libros, reserva 41 libros esta vez y copia la información,
		//luego tu a mano, copias el nuevo libro que tienes guardado en otra variable.

		fre(catalog);
	}

	return EXIT_SUCCESS;

}
