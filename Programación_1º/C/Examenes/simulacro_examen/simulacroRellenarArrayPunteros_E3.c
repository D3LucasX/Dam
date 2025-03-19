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
//Funcion que dice si un número es primo o no.
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
	   
		/*#include <stdio.h>
#include <stdlib.h>

void sumarMatriz(int filas, int columnas) {
    // 1. Crear la matriz dinámica de tamaño filas x columnas
    int** matriz = (int**)malloc(filas * sizeof(int*)); // Reservar memoria para las filas
    if (matriz == NULL) {
        printf("Error al asignar memoria para las filas.\n");
        return;  // Retornar sin hacer nada si la memoria no se asigna
    }

    // Reservar memoria para cada fila (cada una será un array de enteros)
    for (int i = 0; i < filas; i++) {
        matriz[i] = (int*)malloc(columnas * sizeof(int));  // Reservar memoria para cada columna
        if (matriz[i] == NULL) {
            printf("Error al asignar memoria para las columnas.\n");
            return;  // Retornar sin hacer nada si la memoria no se asigna
        }
    }

    // 2. Llenar la matriz con valores (por ejemplo, valores de 1 a 9)
    int valor = 1;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = valor++;
        }
    }

    // 3. Sumar todos los elementos de la matriz
    int suma = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            suma += matriz[i][j];
        }
    }

    // 4. Imprimir la suma
    printf("La suma de todos los elementos de la matriz es: %d\n", suma);

    // 5. Liberar la memoria de la matriz
    for (int i = 0; i < filas; i++) {
        free(matriz[i]);  // Liberar cada fila
    }
    free(matriz);  // Liberar la memoria de las filas
}

int main() {
    int filas = 3;
    int columnas = 3;
    
    sumarMatriz(filas, columnas);  // Llamada a la función que no devuelve nada
    
    return 0;
}*/