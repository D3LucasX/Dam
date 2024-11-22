#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
//DEfinimos las constantes.
#define MAX_NOMBRE 20
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
void inicializar(Estudiante * estudiante_a_relenar, char * nombre, int edad, float nota){

	//estudiante_a_rellenar.edad = edad No compila por que estudiante_a_rellenar es un puntrero, no un estudiante en si, por eso usamos la flecha ' -> '
	estudainte_a_rellenar -> edad = edad;
	estudiante_a_rellenar -> nota = nota;
	//estudiante_a_rellenar.nombre= nombre; Esto no funciona por que con esto no pasa la cadena de caracteres si no que pasa el espacio de memoria.
	strcpy(estudiante_a_rellenar -> nombre,nombre);

}

int main (){
	int num_estudiantes[MAX_ESTUDIANTES]; // Al haber hecho un define con ewst creo un array y por eso no pongo el & en el scanf.
	char nombre[MAX_NOMBRE];
	int edad;
	float nota;

	Estudiante listado[MAX_ESTUDIANTES]; //Aqui se reserva la memoria para los estudiantes, los 560 bytes.

	printf("Size of listado %lu\n", sizeof(listado)); // 560 porque hay 28 bites por cada estudiante, que hay 20.
	printf("Size of Estudiante %lu\n", sizeof(Estudiante)); // 28 porque hay 28 bites por estudiante
	
	
	printf("Cuantos estudiantes desea inicializar?\n");
	scanf("%d", num_estudiantes);
	for(int i = 0; i < num_estudiantes; i++){

	printf("Introduce la edad\n");
	scanf("%d", &edad);
	printf("Introduce la nota\n");
	scanf("%f", &nota);
	printf("Introduce el nombre: \n");
	scanf("%s", nombre);

	inicializar(listado + i, nombre, edad, nota);
	/*inicializar(&listado[0], nombre, edad, nota);*/  //Esto tambien esta bien pero cuando tienes mucisimos datos te puedes liar.
	}// Esto "rellena estudiantes", entre comillas
	return EXIT_SUCCESS;

}
