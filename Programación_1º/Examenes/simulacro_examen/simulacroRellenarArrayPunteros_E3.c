#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */

//Funcion que pide el total de numeros que tenfra el array.
int pedirNumero(){
	int num;
	while(num < 0){
	printf("Escribe el tamaño del array con un número positivo.\n");
	scanf("%d", &num);
	}
	return num;
}
Funcion que dice si un número es primo o no.
bool esPrimo(int num){
	if (num <= 1) return false;
	for (int i = 2; i * i <= num; i++){
		if(num % i == 0){
			return false;
		}
	}
	return true;
}
// Funcion que rellena el array con numeros primos.
void rellenarArray(int* array, int tamaño){
	int num = 2;
	int i = 0;
	while (i < tamaño){
		if (esPrimo(num)){
			array[i] = num;
			i++;
		}
		num++;
	}

int main (){
	int tamaño = pedirNumero();
	int array = (int*) malloc (tamaño * sizeof(int));
	if (array == NULL){
		printf("No hay espacio.\n");
		return EXIT_SUCCESS;
	}
	// Bucle que rellena el array con números primos.
	printf("El array con el tamaño de %d que se ha generado es: ", tamaño);
	for(int i = 0; i < tamaño; i++){
		printf("%d", array[i]);
	}

	free(array);
	return EXIT_SUCCESS;

}

/* PREGUNTA PARA RAZONAR*/

	/*Al liberar la memoria con free(), ¿los datos almacenados en el array desaparecen inmediatamente? 
	 ¿Qué ocurre si intentamos acceder a ellos después de liberar la memoria?*/

/*RESPUESTA*/

	/* Al liberar la memoria con el free, los datos no se eliminan como tal, podrian seguir presentes en la memoria
	   , solo que se libera la memoria  que esta siendo utilizada para almacenar esos datos,es decir, el bloque de 
	   memoria vuelve a estar disponible por lo que se podrian sobreescribir datos en ella.
	   
	   Si intentas acceder a ella despues de haberla liberado, puedes experimentar comportamientos indefinidos, esto 
	   es por que la memoria donde estaba definida el array ya esta liberada. el sistema operativo podria haber usado esa
	   memoria otros procesos o variables. A los punteros que apuntan a memoria que ya ha sido liberada se le llama punteros
	   colgantes y acceder a ellos puede provocar segmentation faults o resultados impredecibles.
	   
		