#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
//DEfinimos las constantes.
#define MAX_NOMBRE 20
#define MAX_BUFFER 200 // Maximo de caracteres para la frase de la funcion de EstudianteToString
#define MAX_ESTUDIANTES 20

typedef struct{
	char nombre[MAX_NOMBRE];
	int edad;
	float nota;
}Estudiante;
/*Estudiant inicializar(char * nombre, int edad, float nota){i
	// Creo el estudiante
	Estudiante estudiante_nuevo;			//Esta funcion no se podria hacer por que los datos que ingresas en una funcion no se quedan guardados para siempre, cuando se ejecuta la 
							//funcion, esa información se pierde.
	//Inicializo el estudiante. e.edad = edad; e. . . .
	return estudiante_nuevo
}*/

/*Estudiante * inicializar(char * nombre, int edad, float nota){
	
	//Estudiante * estudiante_nuevo;			//No me vale por que no tiene un amemoria reservada para rellenar los datos de ese estudiante nuevo
	Estudiante * estudiante_nuevo = malloc//memory allocation //memoria dinamica-> esto si valdria por que reservas memoria, pero aun no sabemos como se hace.*/
void inicializar(Estudiante * estudiante_a_rellenar, char * nombre, int edad, float nota){

	//estudiante_a_rellenar.edad = edad No compila por que estudiante_a_rellenar es un puntrero, no un estudiante en si, por eso usamos la flecha ' -> '
	estudiante_a_rellenar -> edad = edad;
	estudiante_a_rellenar -> nota = nota;
	//estudiante_a_rellenar.nombre= nombre; Esto no funciona por que con esto no pasa la cadena de caracteres si no que pasa el espacio de memoria.
	strcpy(estudiante_a_rellenar -> nombre,nombre);

}
//Tiene que recibir un puntero a estudiante pr que va a modificar la edad del estudiante, si no hiciera falta no haria falta pasar el puntero.
//Si no va  a devlover nada solo sera void
void cumpleanios(Estudiante * cumpleanero){
	cumpleanero->edad ++;
}

void imprimirEstudiante(const Estudiante * estudiante_a_imprimir){  //Es mejor pasarlo como puntero aunque no queramos cambiar el valor por que si pasamos por valor, se apila un dato enciam de otro y tardaria
																	//mucho si en vez de tres valores quisieramos pasar 1000, pero si que es importante no cambiar el valor que queremos
																	//pasar en la funcion, asi que usaríamos const, hay que hacer constante el contenido del puntero. y a nada mas ya que al efectuarse mi funcion 
																	//la copia que se crea se borra.
printf("Nombre: %s\n", estudiante_a_imprimir->nombre);
printf("\tEdad: %d\n", estudiante_a_imprimir->edad );
printf("\tNota: %f\n", estudiante_a_imprimir->nota);
}
/*Me puede interesar una función de imprimir sin los printf, porque a veces se
descuadra el código, normalmente interesa solo desde el main hacerlos, asi que 
convertiremos un estudiante en un string, a una cadena de texto*/

//CON WARNING
char* estudianteToString_warning(const Estudiante * datos){
	char retval[MAX_BUFFER];

	//snprintf(donde, cuando, el qué)  // retval nombre tipico de variable de retorno.
	snprintf(retval, MAX_BUFFER, "El estudiante %s de %d años, ha sacado un %f.\n", datos->nombre, datos->edad, datos->nota);
	// Usamos size of para asegurarnos de que el buffer es MAX_BUFFER

	return retval;
	/*Esto genera un warning porque cuando termina la funcion lo que imprime o lo que hace la funcion se borrara*/
}
void estudianteToString(const Estudiante * datos, char * retval){

	//snprintf(donde, cuando, el qué)  // retval nombre tipico de variable de retorno.
	snprintf(retval, MAX_BUFFER*sizeof(char)/* 200 caracteres por lo que ocupa un char, que son 4*/, "El estudiante %s de %d años, ha sacado un %f.\n", datos->nombre, datos->edad, datos->nota);
	}
void ModificarNombreEstudiante(Estudiante * estudiante_a_modificar , char * nuevoNombre){
	
	/*printf("Asigna el nombre nuevo.\n");
	scanf("%s\n", nombre_a_modificar->nombre);*/

	strcpy(estudiante_a_modificar->nombre, nuevoNombre);
}

int main (){
	int num_estudiantes; // Al haber hecho un define con ewst creo un array y por eso no pongo el & en el scanf.
	char nombre[MAX_NOMBRE];
	char retval;
	int edad;
	float nota;
	


	Estudiante listado[MAX_ESTUDIANTES]; //Aqui se reserva la memoria para los estudiantes, los 560 bytes.

	printf("Size of listado %lu\n", sizeof(listado)); // 560 porque hay 28 bites por cada estudiante, que hay 20.
	printf("Size of Estudiante %lu\n", sizeof(Estudiante)); // 28 porque hay 28 bites por estudiante
	
	printf("Cuantos estudiantes desea inicializar?\n");
	scanf("%d", &num_estudiantes);
	for(int i = 0; i < num_estudiantes; i++){

	printf("Introduce la edad\n");
	scanf("%d", &edad);
	printf("Introduce la nota\n");
	scanf("%f", &nota);
	printf("Introduce el nombre: \n");
	scanf("%s", nombre);

	inicializar(listado + i, nombre, edad, nota); //Es listado solo por que te pide un puntero y listao ya es un puntero
	/*inicializar(&listado[0], nombre, edad, nota);*/  //Esto tambien esta bien pero cuando tienes mucisimos datos te puedes liar.
	}// Esto "rellena estudiantes", entre comillas
	/*inicializar(listado, nombre, edad, nota);*/
	
	printf("Edad antigua de %s; %d\n", listado[0].nombre, listado[0].edad);
	
	cumpleanios (&listado[0]);
	printf("Edad nueva : %d\n", listado[0].edad);
	
//* Vamos a imprimir estudiantes
	imprimirEstudiante(&listado[0]);

	char StringARellenar[MAX_BUFFER];  // Es una función,Caja vacia para usar la funcion de cambiar a string
	estudianteToString(&listado[0], StringARellenar);
	printf("%s\n", StringARellenar);
	

	/*FUNCION QUE CAMBIA EL NOMBRE DE IN ESTUDIANTE
	printf("¿Que estudiante desea modificar?");
	scanf("%d", &eleccion);
	printf("Nombre antiguo: %s.\n", &listado[eleccion].nombre);

	ModificarNombre(&listado[eleccion], nombre);*/

	//Lo que hace el profe
	char nuevoNombre[MAX_NOMBRE];
	printf("Introduce el nuevo nombre.\n");
	scanf("%s", nuevoNombre);
	ModificarNombreEstudiante(&listado[0], nuevoNombre);

	return EXIT_SUCCESS;

}
