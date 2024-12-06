#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_TITULO 50
#define MAX_AUTOR 50
/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */


/*Para en el codigo, no usar numeros por categorias, y usar los alias. 
El numero 0 seria FICCION*/
typedef enum{
	FICCIÓN,    //0
	NO_FICCIÓN, //1
	POESÍA,     //2
	TEATRO,     //3
	ENSAYO      //4
}Categoria;

/*Un struct que guarda todo lo que debe de tener un libro*/
typedef struct{
	int id;
	char titulo[MAX_TITULO];
	char autor[MAX_AUTOR];
	float precio;
	Categoria categoria;
	int cantidad;
}Libro;


void MostrarLibro(const Libro * libro_a_imprimir){ //Funcion que te imprime un libro, pasas como parámetro el puntero al primer libro. 
		int i = 0;
		printf("\tID: %d\n", libro_a_imprimir->id);  // Ponemos la flecha para acceder al contenido de lo que viene despues de la flecha.
		printf("\tTítulo: %s\n", libro_a_imprimir->titulo);
		printf("\tAutor: %s\n", libro_a_imprimir->autor);
		printf("\tPrecio: %.2f\n", libro_a_imprimir->precio);
		switch(libro_a_imprimir->categoria){  //El enum guarda numeros enteros con un alias en cada uno, entonces si imprimes solo 
											  //la categoria, te imprimiría el numero entero en vez del alias, para que te imprima
											  //el alias, hacemos una condicional switch, en la que revisa el numero de la categoría
											  // y por cada caso, imprimira el alias de cada categoria.
		case 0:
			printf("\tCategoría: FICCIÓN \n");
			break;
		case 1:
			printf("\tCategoría: NO FICCIÓN\n");
			break; 
		case 2:
			printf("\tCategoría: POESÍA\n");
			break;
		case 3:
			printf("\tCategoría: TEATRO\n");
			break;
		case 4:
			printf("\tCategoría: ENSAYO\n");
			break;
			default:
			("\n");
			break;
		}
		printf("\tStock: %d\n\n", libro_a_imprimir->cantidad);
		
	}

void MostrarLibros(const Libro * libro_a_imprimir){ //Función que te imprime todo el catálogo de libros, pasando como parámetro un puntero al primer libro, de esta manera, entra un bucle for 
													//que recorre todo el catálogo de libros, y llamamos a la función de Mostrar un libro, con el argumento de la dirección de memoria 
													// de donde se encuentra el libro en la posición i, que sería la posición 0, asi va recorriendo e imprimiendo cada libro.
	for(int i = 0; i < 40; i++){
		printf("Libro numero %d.\n", i + 1);
		MostrarLibro(&libro_a_imprimir[i]);
	}
}

void IdentificaLibro(const Libro * Catalogo) { // Función que busca un libro por el ID.
											   // Creamos una función pasando como parámetro un puntero a la primera posicion delstruct. en la que guardamos en una variable el numero del id que introduzca el usuario y 
											   // dentro de un ciclo Do While mediante un bucle for, recorremos 
											   // el array compàrando si el id del catalogo(num entero) es igual al id que introduzca el usuario (numero entero),
											   // en caso de encontrarlo, ponemos un break para que salga del bucle for, y nos da la opcion de que si queremos buscar otro libro
											   // opcion que guardara en otra variable, opción que comparará con la condicion del While, y en caso de ser correcto, te dejará
											   // volver a buscar otro libro. 
	int buscar = -1;  // Inicializamos a un valor fuera del rango válido
    int SiNo = 0;
    
    do { 
        // Primer ciclo para validar que el ID sea válido
        while (buscar < 0 || buscar > 40) { 
        	//Lo dejamos dentro del do, para que en el while del Do-While sea el que nos indique si se repite todo otra vez.
            printf("¿Que libro desea buscar?\n");
            printf("\tIntroduzca el ID del libro: \n");
            scanf("%d", &buscar);

            if (buscar < 0 || buscar > 40) {
                printf("Introduce un valor válido.\n");
            }
        }

        // Buscar y mostrar el libro
        int found = 0; // Indicador para saber si encontramos el libro
        for (int i = 0; i < 40; i++) {
            if (buscar == Catalogo[i].id) {
                MostrarLibro(&Catalogo[i]);
                break;
            }
        }
        // Segundo ciclo para preguntar si desea buscar otro libro
        printf("¿Desea buscar otro libro? (marque 1 si es que sí, marque cualquier otra cosa si es que no)\n");
        scanf("%d", &SiNo);

        // Resetear el valor de `buscar` si decide buscar otro libro
        if (SiNo == 1) {
            buscar = -1;  // Resetear el valor de buscar para que entre al primer `while` de nuevo, lo reseteamos con -1  y no con 0, ya que la condicion del primer
            			  // 'while' siepre entrara con -1 y te dejara que indiques el ID del libro que quieres buscar, porque si hubiera un 0, entra dentro de la condicion
            			  // y al ser 0, no se cumple, entonces procede a buscarte el libro 0, que no existe, y asi todo el rato.
        }

    } while (SiNo == 1);  // Se sigue repitiendo si SiNo es == 1
}
	



void IncrementarStock(Libro * Libro_a_Incrementar){ // Función que incrementa el stock de el libro que busques.
													// Creamos una función que pasando como parámetro un puntero a la primera posición de un struct. En la función creamos dos variables en las que 
													// guardaremos el incremento y otra en la que guardaremos el numero que nos de el usuario para buscar el libro por el id.
													// Haremos un bucle for en el que recorreremos el catálogo y cuando encuentre el libro que queremos, le sumara el incremento.
													// Cuando haya encontrado el libro y le haya sumado el incremento, utilizando un break, saldra del bucle for.
	int incremento = 0, buscar = 0;
	
	printf("¿Que libro desea buscar para incrementar el stock?\n");
	printf("\tIntroduzca el ID del libro: \n");
	scanf("\t%d", &buscar);
	printf("¿Cuanto stock quieres añadir al libro?\n");
	scanf("\t%d", &incremento);
	for (int i = 0; i < 40; i++){
		if(Libro_a_Incrementar[i].id == buscar){  // No hace falta poner la flecha porque ya estamos accediendo a la direccion de memoria con los corchetes.
			//(Libro_a_Incrementar+i)->id <--> Libro_a_Incrementar[i].id
			//(*(Libro_a_Incrementar+i)).id <--> Libro_a_Incrementar[i].id
			Libro_a_Incrementar[i].cantidad = Libro_a_Incrementar[i].cantidad + incremento; // Libro_a_Incrementar[i].cantidad + incremento; esto solo no funciona, por que el resultado de la suma
																							// no lo guarda en ningún sitio.
			printf("El nuevo stock del libro %d es: %d\n",Libro_a_Incrementar[i].id, Libro_a_Incrementar[i].cantidad);
			break;
	}
}
}

void BuscarPorCategoria(const Libro * CatalogoCategoria){  // Funcion que te filtra los libros por categoria y te los imprime.
														   // Creamos una función en la que pasamos como parametro el puntero al primer libro del catálogo, te da la opcion de elegir 
														   // la categoría y te da la opcion de salir que la implementamos con una condicion if, mediante un bucle for, recorremos todos
														   // los libros, y comparamos la categoria introducida (número entero) con la categoría de ese libro (número entero), y en caso de ser iguales
														   // llamamos a la funcion mostrar un libro, que te imprime ese libro de la categoría elegida y asi hasta que encuentre todos y los imprima 
														   // todos, ya que si el libro que encuentra, no es de la categoria elegida, lo saltaremos gracias a un continue.
	int buscar;
	int SiNo = 0;

	printf("¿Por qué categoria quieres filtrar?\n");
	printf("\n");
	printf("En caso de no querer, marque el '5'");
	printf("Introduzca la cetegoría del libro(Marque el numero correspondiente a la categoría)\n");
	printf("¿Que opcion desea realizar?\n\
			0. Ficción\n\
			1. No Ficción.\n\
			2. Poesía.\n\
			3. Teatro.\n\
			4. Ensayo.\n\
			5. Salir\n");
	scanf("\t%d", &buscar);
	if (buscar > 4){
		return;
	}
	for (int i = 0; i < 40; i++){
		if(buscar == CatalogoCategoria[i].categoria){
			MostrarLibro(&CatalogoCategoria[i]); // Accedemos a la direccion de memoria del catalogo en la posicion i
		}else{
			continue;
		}
	}
}
void BuscarPorAutor(const Libro * FiltroPorAutor){
	char autor_a_buscar[100]; // creamos una variable para almacenar el nombre que de el usuario.
	printf("Escribe el nombre del autor.\n");
	scanf(" %[^\n]", autor_a_buscar); // COn ese scanf almacenamos lo que el usuario introduzca sin contar espacios usando %[^\n]
	for(int i = 0; i < 40; i++){  // Creamos dos bucles, uno para recorrer cada libro y otro para recorrer cada cadena de caracter del autor que contenga cada libro
		for(int j = 0; FiltroPorAutor[i].autor[j] != '\0'; j++){ //De esta manera cuando llegue al \0 dejara de aumentar.

	if (strncmp(&FiltroPorAutor[i].autor[j], autor_a_buscar, strlen(autor_a_buscar)) == 0){ //comparamos con 0 para que ejecute el bloque si son iguales las cadenas de caracteres.

		// Con strncmp lo que hacemos es que comparamos las primeras posiciones de dos cadenas de caracteres con X caracteres.
		// Para ello es necesario pasarle dos punteros apuntando al primer caracter de ambas cadenas a comparar, como FiltroPorAutor[i].autor[j] no es 
		// un puntero, por que le estamos indicando el caracter en si, con la posicion 'j', hay que añadirle el '&' para que le pases la direccion de 
		// memoria del primer caracter, si no coincide y FiltroPorAutor[i].autor[j] es distinto de \o, j aumenta, entonces comparara desde la direccion
		// de memoria de j + 1 y asi hasta que llegue al \0 que entonces saldra de el bucle interno.
		// Por otro lado autor_a_buscar ya es un puntero al primer caracter de la cadena de caracteres, por eso cuando el usuario lo escribe en
		// el scanf, no hace falta guardarlo en una variable con el '&'.
		// Y finalmente tenemos el numero de caracteres que queremos que se comparen, que en este caso sera el numero de caracteres que tenga autor_a_buscar.
		
		MostrarLibro(&FiltroPorAutor[i]); //Accedemos a la direccion de memoria del catalogo en la posicion i
		break; // Si nos encuentra al libro del autor, nos lo imprime y sale del subbucle.
	}else{
		continue; //Si no lo encuentra, continua.
	}
}
}
}


int main (){
	int i = 0, opcion;

	Libro libro[40] = {
		{1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICCIÓN, 10},
        {2, "1984", "George Orwell", 12.49, FICCIÓN, 5},
        {3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICCIÓN, 8},
        {4, "Moby Dick", "Herman Melville", 18.99, FICCIÓN, 12},
        {5, "War and Peace", "Leo Tolstoy", 20.00, FICCIÓN, 7},
        {6, "Pride and Prejudice", "Jane Austen", 14.99, FICCIÓN, 9},
        {7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICCIÓN, 6},
        {8, "The Odyssey", "Homer", 17.49, FICCIÓN, 4},
        {9, "Ulysses", "James Joyce", 25.00, FICCIÓN, 2},
        {10, "The Divine Comedy", "Dante Alighieri", 22.00, POESÍA, 3},
        {11, "Leaves of Grass", "Walt Whitman", 13.00, POESÍA, 11},
        {12, "The Iliad", "Homer", 18.50, FICCIÓN, 7},
        {13, "A Brief History of Time", "Stephen Hawking", 15.00, NO_FICCIÓN, 15},
        {14, "The Art of War", "Sun Tzu", 9.99, NO_FICCIÓN, 20},
        {15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NO_FICCIÓN, 13},
        {16, "The Selfish Gene", "Richard Dawkins", 14.00, NO_FICCIÓN, 6},
        {17, "The Road to Serfdom", "F.A. Hayek", 10.50, NO_FICCIÓN, 5},
        {18, "The Wealth of Nations", "Adam Smith", 30.00, NO_FICCIÓN, 8},
        {19, "On the Origin of Species", "Charles Darwin", 24.99, NO_FICCIÓN, 4},
        {20, "The Prince", "Niccolò Machiavelli", 8.99, NO_FICCIÓN, 14},
        {21, "Hamlet", "William Shakespeare", 11.50, TEATRO, 6},
        {22, "Macbeth", "William Shakespeare", 9.50, TEATRO, 8},
        {23, "Othello", "William Shakespeare", 10.99, TEATRO, 7},
        {24, "A Doll's House", "Henrik Ibsen", 12.50, TEATRO, 5},
        {25, "Waiting for Godot", "Samuel Beckett", 13.99, TEATRO, 4},
        {26, "Death of a Salesman", "Arthur Miller", 14.99, TEATRO, 10},
        {27, "The Glass Menagerie", "Tennessee Williams", 11.00, TEATRO, 9},
        {28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, TEATRO, 3},
        {29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, TEATRO, 15},
        {30, "The Waste Land", "T.S. Eliot", 6.99, POESÍA, 10},
        {31, "Paradise Lost", "John Milton", 12.00, POESÍA, 7},
        {32, "Beowulf", "Anonymous", 15.00, POESÍA, 5},
        {33, "Essays", "Michel de Montaigne", 20.00, ENSAYO, 4},
        {34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ENSAYO, 9},
        {35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ENSAYO, 11},
        {36, "Meditations", "Marcus Aurelius", 11.99, ENSAYO, 8},
        {37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ENSAYO, 5},
        {38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ENSAYO, 12},
        {39, "The Republic", "Plato", 16.00, ENSAYO, 6},
        {40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ENSAYO, 10}
	} ;
	printf("\n");
	printf("Bienvenido a la Biblioteca Nacional de los Iulian Drakars\n");
	printf("\n");
	while(opcion != 5){
	printf("Introduzca la opción de la acción que desee realizar:\n\
			1. Mostrar todo el catálogo de libros.\n\
			2. Buscar un libro por ID.\n\
			3. Incrementar el stock de un libro.\n\
			4. Filtrar por categoría.\n\
			5. Filtrar por Autor.\n\
			6. Salir\n");
	scanf("%d", &opcion);
	if (opcion > 5){
		return 1;
	}
	switch(opcion){ // Hacemos una condicional de casos para crear un menu que nos permitirá elegir que función queremos ejecutar.
		case 1:
			MostrarLibros(libro); // Llamamos a la función con el argumento libro ya que es el puntero que pasamos en la funcion como parámetro.
			break;
		case 2:
			IdentificaLibro(libro); // Llamamos a la función con el argumento libro ya que es el puntero que pasamos en la funcion como parámetro.
			break; 
		case 3:
			IncrementarStock(libro); // Llamamos a la función con el argumento libro ya que es el puntero que pasamos en la funcion como parámetro.
			break;
		case 4:
			BuscarPorCategoria(libro); // Llamamos a la función con el argumento libro ya que es el puntero que pasamos en la funcion como parámetro.
			break;
		case 5:
			BuscarPorAutor(libro);
			break;
		default:
			("\n");
			break;
		}
	}

	return EXIT_SUCCESS;

}

