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


void MostrarLibro(const Libro * libro_a_imprimir);

void MostrarLibros(const Libro * libro_a_imprimir, int *total_libros);

void IdentificaLibroPorId(const Libro * Catalogo,int id_a_buscar, int *total_libros);

void IdentificaLibro(const Libro * Catalogo, int *total_libros);

void IncrementarLDC(Libro * Libro_a_Incrementar, int id, int incremento, int *total_libros);

void IncrementarStock(Libro * Libro_a_Incrementar, int *total_libros);

void FiltraPorCategoria(const Libro * Catalogo, int categoria, int *total_libros);

void BuscarPorCategoria(const Libro * CatalogoCategoria, int *total_libros);

void FiltrarPorAutor(const Libro * Catalogo, char autor_a_buscar[100], int *total_libros);

void BuscarPorAutor(const Libro * FiltroPorAutor, int *total_libros);

void inicializarLibro(Libro* direccion, int id, char* titulo, char* autor, float precio, int categoria, int cantidad, int* total_libros);

void AñadirLibroDesdeLineaDeComandos(Libro** catalogo, int* total_libros, const char* titulo, const char* autor, float precio, int categoria, int cantidad);

void AñadirLibro(Libro** catalogo, int * total_libros);



 
int main (int argc, char *argv[]){
	int i = 0, opcion;

	/*Lo que hacemos es crear una variable que inicializamos en 0, para que en la funcion vaya 
	sumando uno cada vez que se inicialize un libro, de esta manera sabemos cuantos libros hay.*/
	int total_libros = 0;
	
    Libro * libro = (Libro*) malloc( 40 * sizeof(Libro));
    /*Reserva de memoria para 40 libros*/

    if(libro == NULL){
    	printf("ERROR, NO HAY MEMORIA\n");
    	return EXIT_FAILURE; //Si no hay espacio para hacer la reserva de la memória, entonces se cancelara.
    }

    /*INICIALIZAMOS LIBRO*/
    inicializarLibro(&libro[0], 1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICCIÓN, 10, &total_libros);
    inicializarLibro(&libro[1], 2, "1984", "George Orwell", 12.49, FICCIÓN, 5, &total_libros);
    inicializarLibro(&libro[2], 3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICCIÓN, 8, &total_libros);
    inicializarLibro(&libro[3], 4, "Moby Dick", "Herman Melville", 18.99, FICCIÓN, 12, &total_libros);
    inicializarLibro(&libro[4], 5, "War and Peace", "Leo Tolstoy", 20.00, FICCIÓN, 7, &total_libros);
    inicializarLibro(&libro[5], 6, "Pride and Prejudice", "Jane Austen", 14.99, FICCIÓN, 9, &total_libros);
    inicializarLibro(&libro[6], 7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICCIÓN, 6, &total_libros);
    inicializarLibro(&libro[7], 8, "The Odyssey", "Homer", 17.49, FICCIÓN, 4, &total_libros);
    inicializarLibro(&libro[8], 9, "Ulysses", "James Joyce", 25.00, FICCIÓN, 2, &total_libros);
    inicializarLibro(&libro[9], 10, "The Divine Comedy", "Dante Alighieri", 22.00, POESÍA, 3, &total_libros);
    inicializarLibro(&libro[10], 11, "Leaves of Grass", "Walt Whitman", 13.00, POESÍA, 11, &total_libros);
    inicializarLibro(&libro[11], 12, "The Iliad", "Homer", 18.50, FICCIÓN, 7, &total_libros);
    inicializarLibro(&libro[12], 13, "A Brief History of Time", "Stephen Hawking", 15.00, NO_FICCIÓN, 15, &total_libros);
    inicializarLibro(&libro[13], 14, "The Art of War", "Sun Tzu", 9.99, NO_FICCIÓN, 20, &total_libros);
    inicializarLibro(&libro[14], 15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NO_FICCIÓN, 13, &total_libros);
    inicializarLibro(&libro[15], 16, "The Selfish Gene", "Richard Dawkins", 14.00, NO_FICCIÓN, 6, &total_libros);
    inicializarLibro(&libro[16], 17, "The Road to Serfdom", "F.A. Hayek", 10.50, NO_FICCIÓN, 5, &total_libros);
    inicializarLibro(&libro[17], 18, "The Wealth of Nations", "Adam Smith", 30.00, NO_FICCIÓN, 8, &total_libros);
    inicializarLibro(&libro[18], 19, "On the Origin of Species", "Charles Darwin", 24.99, NO_FICCIÓN, 4, &total_libros);
    inicializarLibro(&libro[19], 20, "The Prince", "Niccolò Machiavelli", 8.99, NO_FICCIÓN, 14, &total_libros);
    inicializarLibro(&libro[20], 21, "Hamlet", "William Shakespeare", 11.50, TEATRO, 6, &total_libros);
    inicializarLibro(&libro[21], 22, "Macbeth", "William Shakespeare", 9.50, TEATRO, 8, &total_libros);
    inicializarLibro(&libro[22], 23, "Othello", "William Shakespeare", 10.99, TEATRO, 7, &total_libros);
    inicializarLibro(&libro[23], 24, "A Doll's House", "Henrik Ibsen", 12.50, TEATRO, 5, &total_libros);
    inicializarLibro(&libro[24], 25, "Waiting for Godot", "Samuel Beckett", 13.99, TEATRO, 4, &total_libros);
    inicializarLibro(&libro[25], 26, "Death of a Salesman", "Arthur Miller", 14.99, TEATRO, 10, &total_libros);
    inicializarLibro(&libro[26], 27, "The Glass Menagerie", "Tennessee Williams", 11.00, TEATRO, 9, &total_libros);
    inicializarLibro(&libro[27], 28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, TEATRO, 3, &total_libros);
    inicializarLibro(&libro[28], 29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, TEATRO, 15, &total_libros);
    inicializarLibro(&libro[29], 30, "The Waste Land", "T.S. Eliot", 6.99, POESÍA, 10, &total_libros);
    inicializarLibro(&libro[30], 31, "Paradise Lost", "John Milton", 12.00, POESÍA, 7, &total_libros);
    inicializarLibro(&libro[31], 32, "Beowulf", "Anonymous", 15.00, POESÍA, 5, &total_libros);
    inicializarLibro(&libro[32], 33, "Essays", "Michel de Montaigne", 20.00, ENSAYO, 4, &total_libros);
    inicializarLibro(&libro[33], 34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ENSAYO, 9, &total_libros);
    inicializarLibro(&libro[34], 35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ENSAYO, 11, &total_libros);
    inicializarLibro(&libro[35], 36, "Meditations", "Marcus Aurelius", 11.99, ENSAYO, 8, &total_libros);
    inicializarLibro(&libro[36], 37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ENSAYO, 5, &total_libros);
    inicializarLibro(&libro[37], 38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ENSAYO, 12, &total_libros);
    inicializarLibro(&libro[38], 39, "The Republic", "Plato", 16.00, ENSAYO, 6, &total_libros);
    inicializarLibro(&libro[39], 40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ENSAYO, 10, &total_libros);


	/* argv son las DIRECCIONES DE MEMORIA que se asocian a cada argumento */
	/* argc son la cantidad de elementos que quieres pedir */
		
        //return EXIT_FAILURE;//Si se quier eejecutar el programa con el menu, se debera eliminar o comentar este EXIT_FAILURE;
	if (argc < 2){
		printf(" \n");
		printf("EJECUCIÓN DE FUNCIONES DESDE LA LÍNEA DE COMANDOS\n");
		printf("Pulsa ctrl + c, y despues al ejecutar el programa, escribe al lado del ejecutable la funcion que quiera realizar siguiendo los pasos que encontrará a continuación.\n");
        printf("Uso: %s <Mostrar>\n", argv[0]);
        printf("Uso: %s <IdentificarLibro -> id>\n", argv[0]);
        printf("Uso: %s <Categoria: -> \n\
        		0. Ficción\n\
			1. No Ficción.\n\
			2. Poesía.\n\
			3. Teatro.\n\
			4. Ensayo.\n\
			5. Salir>\n", argv[0]);
        printf("Uso: %s <Autor -> 'Nombre Del Autor'>\n", argv[0]);
        printf("Uso: %s <Stock -> id -> Cantidad A Añadir>\n", argv[0]);
        printf("Uso: %s <Añadir ->'Título' -> 'Autor' -> Precio -> Categoria -> Cantidad.>\n", argv[0]);
		printf("Si quieres ejecutar las funciones desde la línea de comandos, sigue las instrucciones:\n");
		printf(" \n");
		printf(" \n");
		printf("***********************************************************\n");
		printf("*Bienvenido a la Biblioteca Nacional de los Iulian Drakars* \n");
		printf("***********************************************************\n");
		while(opcion != 6){
		printf("\tIntroduzca la opción de la acción que desee realizar:\n\
				\t1. Mostrar todo el catálogo de libros.\n\
				\t2. Buscar un libro por ID.\n\
				\t3. Incrementar el stock de un libro.\n\
				\t4. Filtrar por categoría.\n\
				\t5. Filtrar por Autor.\n\
				\t6. Añadir Libro.\n\
				\t7. Salir\n");
				scanf("%d", &opcion);
				if (opcion > 6){
					return 1;
				}
			switch(opcion){ // Hacemos una condicional de casos para crear un menu que nos permitirá elegir que función queremos ejecutar.
				case 1:
					MostrarLibros(libro, &total_libros); // Llamamos a la función con el argumento libro ya que es el puntero que pasamos en la funcion como parámetro.
					break;
				case 2:
					IdentificaLibro(libro, &total_libros); // Llamamos a la función con el argumento libro ya que es el puntero que pasamos en la funcion como parámetro.
					break; 
				case 3:
					IncrementarStock(libro, &total_libros); // Llamamos a la función con el argumento libro ya que es el puntero que pasamos en la funcion como parámetro.
					break;
				case 4:
					BuscarPorCategoria(libro, &total_libros); // Llamamos a la función con el argumento libro ya que es el puntero que pasamos en la funcion como parámetro.
					break;
				case 5:
					BuscarPorAutor(libro, &total_libros); // Llamamos a la función de Buscar libro por autor.
					break;
				case 6:
					AñadirLibro(&libro, &total_libros); // Llamamos a la funcion de añadir un nuevo libro.
				default:
					("\n");
				break;
			}
		}
	}else if (argc == 2) {
		if (strcmp(argv[1], "Mostrar") == 0) {
        	MostrarLibros(libro, &total_libros);
    	}else if (strcmp(argv[1], "IdentificarLibro") == 0){
    		printf("Introduzca el ID del libro que quier buscar.\n");
    	}else if (strcmp(argv[1], "Categoria") == 0){
    		printf("Introduzca la categoría.\n");
    	}else if (strcmp(argv[1], "Autor") == 0){
    		printf("Introduzca el nombre del autor entre comillas.\n");
    	}else if (strcmp(argv[1], "Stock") == 0){
    		printf("Introduzca el ID del Líbro al que le quieras aumentar el stock, y el stock que quieras añadir.\n");
    	}else if (strcmp(argv[1], "Añadir") == 0){
    		printf("Introduce el 'Título', 'Nombre del autor', precio, categoría y la cantidad que hay disponible en stock.\n");
    	}

    } else if (argc == 3) {
		if (strcmp(argv[1], "IdentificarLibro") == 0){
			int id_a_buscar = atoi(argv[2]);
			if (id_a_buscar < 1 || id_a_buscar > total_libros) {
            printf("Error al encontrar el ID proporcionado.\n");
            printf("Introduzca un id válido entre 1 y %d.\n", total_libros);
        	}else {
            IdentificaLibroPorId(libro, id_a_buscar, &total_libros);
            return 1;  // Si ya se encuentra el libro, termina la ejecución
        	}
    	}else if (strcmp(argv[1], "Categoria") == 0) {
   			 // Verificar si argv[2] está vacío
        int categoria = atoi(argv[2]);
        if (categoria < 0 || categoria > 4) {
            printf("Categoría no válida, seleccione su categoría en función de la siguiente leyenda:\n\
                0. Ficción.\n\
                1. No Ficción.\n\
                2. Poesía.\n\
                3. Teatro.\n\
                4. Ensayo.\n");
        } else {
            FiltraPorCategoria(libro, categoria, &total_libros);
        }
    	}else if(strcmp(argv[1], "Autor") == 0){
			char  * autor_a_buscar = argv[2];
			//Otra manera de hacerlo.
			/*char  autor_a_buscar[100];
			scrpcy(autor_a_buscar,argv[2]);*/

			/*Lo que hacemos es que creamos un puntero al primer caracter de 
			argv[2] para que apunte al primer caracter de argv[2] */
			/* Porque cuando ponemos autor_a_buscar[100] esta reservado en memoria estatica, 
			y argv[2], reserva en memoria dinámica, no esta en el mismo sitio, y eso a C
			no le gusta, por eso no podemos hacer char autor_a_buscar = argv[2]; */
			// Controlar algún error.
			FiltrarPorAutor(libro, autor_a_buscar, &total_libros);
			//Otra manera de hacerlo, pero no es la mas recomendable, ya que puede llevar a errores.
			/*FiltrarPorAutor(libro, argv[2]);*/
		}else if(strcmp(argv[1], "Stock") == 0){
			printf("Introduzca la cantidad que quiere añadir al stock.\n");
		}else if (strcmp(argv[1], "Añadir") == 0){
			printf("Introduce el 'Nombre del autor', precio, categoría y la cantidad que hay disponible en stock.\n");
		}
	}else if(argc == 4){
			if(strcmp(argv[1], "Stock") == 0) {
				int id_a_buscar = atoi (argv[2]);
				int cantidad_a_incrementar = atoi (argv[3]);
				if (id_a_buscar < 0 || id_a_buscar > total_libros){
					printf("Introduzca un ID válido\n");
				}else if(cantidad_a_incrementar < 0 || cantidad_a_incrementar > total_libros){
					printf("Para añadir libros, el valor  ha de ser positivo.\n");
        		}
        		else{
        		IncrementarLDC(libro, id_a_buscar, cantidad_a_incrementar, &total_libros);
        		}
       		}else if(strcmp(argv[1], "Añadir") == 0){
       			printf("Introduce el precio, categoría y la cantidad que hay disponible en stock.\n");
       		} 		
        	
			

	}else if(argc == 5){
		if(strcmp(argv[1], "Añadir") == 0){
			printf("Introduce la categoría y la cantidad que hay disponible en stock.\n");
		}
	}else if(argc == 6){
		if(strcmp(argv[1], "Añadir") == 0){
			printf("Introduce la cantidad que hay disponible en stock.\n");
		}

	}else if (argc == 7){
				const char* titulo = argv[2];   // Título del libro
        		const char* autor = argv[3];    // Autor del libro
        		float precio = atoi(argv[4]);   // Precio del libro (convertido de cadena a float)
        		int categoria = atoi(argv[5]);  // Categoría del libro (convertido de cadena a int)
        		int cantidad = atoi(argv[6]);   // Cantidad del libro en stock (convertido de cadena a int)
		if(strcmp(argv[1], "Añadir") == 0){
        		if (precio < 0){
        			printf("¿Te gusta trabajar grátis?\n");
        			printf("Anda... anda! ponle un precio a eso...!\n");
        		
				}else if (categoria < 0 || categoria > 4) {
            		printf("Categoría no válida, seleccione su categoría en función de la siguiente leyenda:\n\
                			0. Ficción.\n\
               			 	1. No Ficción.\n\
               				2. Poesía.\n\
                			3. Teatro.\n\
                			4. Ensayo.\n");
            	}else if(cantidad < 0){
					printf("Para añadir libros, el valor  ha de ser positivo.\n");
        		}else{
        		// Llamamos a la función para añadir el libro desde la línea de comandos
        		AñadirLibroDesdeLineaDeComandos(&libro, &total_libros, titulo, autor, precio, categoria, cantidad);
        		}
        	}
}



	free(libro); // Si no añadimos ningún libro, y no hacemos ningun realloc, esto 
				 // libera el malloc anterior.

	return EXIT_SUCCESS;

}




void AñadirLibro(Libro** catalogo, int * total_libros){
/* En esta función, se añade un libro nuevo*/
/* Se pasa como parametros un puntero a puntero que apunta a la dirección de memoria del arreglo libros.
Esto es necesario ya que al usar realloc, puede devolver una nueva direccion de memoria,por lo que debemos
de actualizar el puntero catalogo para que apunte a la nueva direccion del catalogo*/
/*¿QUE ME PASABA ANTES?
		- Al no pasar la direccion de memoria modificada, al imprimir todos los libros, los datos del nuevo
		  libro se perdían, ya que no sabia el main donde se habia guardado. Todo esto por que se ejecutaba
		  en la función pero no en el main(lo que hacemos es pasar la dirección de memoria por referencia.)*/	
/*También pasamos como parametro un puntero a la variable total_libros, para pasar su valor por referencia*/

	Libro Libro_Nuevo;

	Libro* temp = (Libro*) realloc (*catalogo ,(*(total_libros) + 1) * sizeof(Libro));
/* *catalogo se usa para acceder al puntero original que apunta al arreglo de libros y pasarlo a realloc para 
redimensionarlo.*/
	if (temp == NULL) {
        printf("Error al reasignar memoria\n");
        return; // Salir si realloc falla
    }

    *catalogo = temp;
    // Si realloc fue exitoso, actualizamos la direccion de memoria, siendo temp la que guarda la nueva direccion de memoria
    // entonces la guardamos en catalogo para asi actualizarlo.

	Libro_Nuevo.id = (*total_libros) + 1;


	printf("¿Cuál es el titulo del nuevo libro?\n");
	scanf(" %[^\n]", Libro_Nuevo.titulo);
	getchar();

	printf(" Escribe el nombre del autor.\n");
	scanf(" %[^\n]", Libro_Nuevo.autor);
	getchar();

	printf("Introduzca el precio:\n");
	scanf("%f", &Libro_Nuevo.precio);
	getchar();

	printf("Introduzca la categoria:\n");
	scanf("%u", &Libro_Nuevo.categoria);
	getchar();

	printf("¿Cual es el stock total del libro?\n");
	scanf("%d", &Libro_Nuevo.cantidad);
	getchar();
	// Pedimos los datos del nuevo libro.

	inicializarLibro(&(*catalogo)[*total_libros], Libro_Nuevo.id, Libro_Nuevo.titulo, Libro_Nuevo.autor, Libro_Nuevo.precio, Libro_Nuevo.categoria, Libro_Nuevo.cantidad, total_libros);
/* Aqui lo que hacemos es acceder a la direccion de memoria del puntero que apunta al siguiente libro a agregar*/

	printf("Nuevo libro añadido: %s por %s\n", (*catalogo)[*total_libros - 1].titulo, (*catalogo)[*total_libros - 1].autor);
}

void AñadirLibroDesdeLineaDeComandos(Libro** catalogo, int* total_libros, const char* titulo, const char* autor, float precio, int categoria, int cantidad) {
    Libro Libro_Nuevo;

    // Usar realloc para redimensionar el catálogo
    Libro* temp = (Libro*) realloc(*catalogo, (*(total_libros) + 1) * sizeof(Libro));
    /* Con esto realojamos los libros en otra direccion de memoria en la que entre el nuevo libro, si cabe en la dirección de memoria que estan, no cambiara*/
    /* cuando haces un realloc, no hace falta ejecutar el free del malloc que tenemos, ya que libera la memoria del malloc.*/
   
    if (temp == NULL) {
        printf("Error al reasignar memoria\n");
        return; // Salir si realloc falla
    }
    *catalogo = temp;

    // Asignar un nuevo ID
    Libro_Nuevo.id = (*total_libros) + 1;

    // Asignar los detalles del libro recibidos como parámetros
    strcpy(Libro_Nuevo.titulo, titulo);
    strcpy(Libro_Nuevo.autor, autor);
    Libro_Nuevo.precio = precio;
    Libro_Nuevo.categoria = categoria;
    Libro_Nuevo.cantidad = cantidad;

    // Inicializar el nuevo libro en el catálogo
    inicializarLibro(&(*catalogo)[*total_libros], Libro_Nuevo.id, Libro_Nuevo.titulo, Libro_Nuevo.autor, Libro_Nuevo.precio, Libro_Nuevo.categoria, Libro_Nuevo.cantidad, total_libros);

    // Imprimir un mensaje de confirmación
    printf("Nuevo libro añadido: %s por %s\n", (*catalogo)[*total_libros - 1].titulo, (*catalogo)[*total_libros - 1].autor);
}

void inicializarLibro(Libro* direccion, int id, char* titulo, char* autor, float precio, int categoria, int cantidad, int* total_libros){
/* Con esta funcion, inicializamos un libro, en la memoria que hemos reservado con malloc en el main*/
/* En la funcion pasamos un putero de tipo Libro con todos los datos necesarios que tiene que tener nuestro libro*/


	direccion -> id = id;
	strcpy(direccion -> titulo, titulo);
	strcpy(direccion -> autor, autor);		// UTILIZAMOS LA FLECHA PORQUE 
	direccion -> precio = precio;			// SE USA CON PUNTEROS A ESTRUCTURAS.
	direccion -> categoria = categoria;
	direccion -> cantidad = cantidad;

	(*total_libros)++;
	/*No aumentaba la variable ya que lo que sucedia cuando tenía puesto esto: *total_libros++, es que primero aumentaba en 1, la direccion de memoria de 
	total_libros, y luego accedia a su contenido, por eso no aumentaba su contenido, si no que aumentaba la dirección de memoria, para arreglarlo le das prioridad
	a acceder al contenido de total_libros, y luego lo aumentas en uno de esta manera: (*total_libros)++; */
}

void BuscarPorAutor(const Libro * FiltroPorAutor, int *total_libros){
	char autor_a_buscar[100]; // Creamos una variable para almacenar el nombre que de el usuario.
	printf("Escribe el nombre del autor.\n");
	scanf(" %[^\n]", autor_a_buscar); // Con ese scanf almacenamos lo que el usuario introduzca sin contar espacios usando %[^\n]

	FiltrarPorAutor(FiltroPorAutor, autor_a_buscar, total_libros);
}

void FiltrarPorAutor(const Libro * Catalogo, char autor_a_buscar[100], int *total_libros){
	for(int i = 0; i < *total_libros; i++){  // Creamos dos bucles, uno para recorrer cada libro y otro para recorrer cada cadena de caracter del autor que contenga cada libro
		for(int j = 0; Catalogo[i].autor[j] != '\0'; j++){ //De esta manera cuando llegue al \0 dejara de aumentar.

	if (strncmp(&Catalogo[i].autor[j], autor_a_buscar, strlen(autor_a_buscar)) == 0){ //comparamos con 0 para que ejecute el bloque si son iguales las cadenas de caracteres.

		// Con strncmp lo que hacemos es que comparamos las primeras posiciones de dos cadenas de caracteres con X caracteres.
		// Para ello es necesario pasarle dos punteros apuntando al primer caracter de ambas cadenas a comparar, como FiltroPorAutor[i].autor[j] no es 
		// un puntero, por que le estamos indicando el caracter en si, con la posicion 'j', hay que añadirle el '&' para que le pases la direccion de 
		// memoria del primer caracter, si no coincide y FiltroPorAutor[i].autor[j] es distinto de \o, j aumenta, entonces comparara desde la direccion
		// de memoria de j + 1 y asi hasta que llegue al \0 que entonces saldra de el bucle interno.
		// Por otro lado autor_a_buscar ya es un puntero al primer caracter de la cadena de caracteres, por eso cuando el usuario lo escribe en
		// el scanf, no hace falta guardarlo en una variable con el '&'.
		// Y finalmente tenemos el numero de caracteres que queremos que se comparen, que en este caso sera el numero de caracteres que tenga autor_a_buscar.
		
		MostrarLibro(&Catalogo[i]); //Accedemos a la direccion de memoria del catalogo en la posicion i
		break; // Si nos encuentra al libro del autor, nos lo imprime y sale del subbucle.
	}else{
		continue; //Si no lo encuentra, continua.
	}
}
}
	printf("El autor que esta buscando, no existe.\n");
}

void BuscarPorCategoria(const Libro * CatalogoCategoria, int *total_libros){  // Funcion que te filtra los libros por categoria y te los imprime.
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
	FiltraPorCategoria(CatalogoCategoria, buscar, total_libros);
}

void FiltraPorCategoria(const Libro * Catalogo, int categoria, int *total_libros){
		for (int i = 0; i < *total_libros; i++){
		if(categoria == Catalogo[i].categoria){
			MostrarLibro(&Catalogo[i]); // Accedemos a la direccion de memoria del catalogo en la posicion i
		}else{
			continue;
		}
	}
}

void IncrementarStock(Libro * Libro_a_Incrementar, int *total_libros){ // Función que incrementa el stock de el libro que busques.
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
	/*for (int i = 0; i < 40; i++){
		if(Libro_a_Incrementar[i].id == buscar){  // No hace falta poner la flecha porque ya estamos accediendo a la direccion de memoria con los corchetes.
			//(Libro_a_Incrementar+i)->id <--> Libro_a_Incrementar[i].id
			//(*(Libro_a_Incrementar+i)).id <--> Libro_a_Incrementar[i].id
			Libro_a_Incrementar[i].cantidad = Libro_a_Incrementar[i].cantidad + incremento; // Libro_a_Incrementar[i].cantidad + incremento; esto solo no funciona, por que el resultado de la suma
																							// no lo guarda en ningún sitio.
			printf("El nuevo stock del libro %d es: %d\n",Libro_a_Incrementar[i].id, Libro_a_Incrementar[i].cantidad);
			break;
	}
}*/
	IncrementarLDC(Libro_a_Incrementar, buscar, incremento, total_libros);
}
void IncrementarLDC(Libro * Libro_a_Incrementar, int id, int incremento, int *total_libros){
	for (int i = 0; i < *total_libros; i++){
		if(Libro_a_Incrementar[i].id == id){  // No hace falta poner la flecha porque ya estamos accediendo a la direccion de memoria con los corchetes.
			//(Libro_a_Incrementar+i)->id <--> Libro_a_Incrementar[i].id
			//(*(Libro_a_Incrementar+i)).id <--> Libro_a_Incrementar[i].id
			Libro_a_Incrementar[i].cantidad = Libro_a_Incrementar[i].cantidad + incremento; // Libro_a_Incrementar[i].cantidad + incremento; esto solo no funciona, por que el resultado de la suma
																							// no lo guarda en ningún sitio.
			printf("El nuevo stock del libro %d es: %d\n",Libro_a_Incrementar[i].id, Libro_a_Incrementar[i].cantidad);
			break;
	}
}
}

void IdentificaLibro(const Libro * Catalogo, int *total_libros) { // Función que busca un libro por el ID.
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
        while (buscar < 0 || buscar > *total_libros) { 
        	//Lo dejamos dentro del do, para que en el while del Do-While sea el que nos indique si se repite todo otra vez.
            printf("¿Que libro desea buscar?\n");
            printf("\tIntroduzca el ID del libro: \n");
            scanf("%d", &buscar);

            if (buscar < 0 || buscar > *total_libros) {
                printf("Introduce un valor válido.\n");
            }
        }

        // Buscar y mostrar el libro
		IdentificaLibroPorId(Catalogo,buscar, total_libros);
        
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

void IdentificaLibroPorId(const Libro * Catalogo,int id_a_buscar, int *total_libros){
	// TODO: completar
        for (int i = 0; i < *total_libros; i++) {
            if (id_a_buscar == Catalogo[i].id) {
                MostrarLibro(&Catalogo[i]);
                break;
            }
        }
}

void MostrarLibros(const Libro * libro_a_imprimir, int *total_libros){ //Función que te imprime todo el catálogo de libros, pasando como parámetro un puntero al primer libro, de esta manera, entra un bucle for 
													//que recorre todo el catálogo de libros, y llamamos a la función de Mostrar un libro, con el argumento de la dirección de memoria 
													// de donde se encuentra el libro en la posición i, que sería la posición 0, asi va recorriendo e imprimiendo cada libro.
	for(int i = 0; i < *total_libros; i++){
		printf("Libro numero %d.\n", i + 1);
		MostrarLibro(&libro_a_imprimir[i]);
	}
}

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
