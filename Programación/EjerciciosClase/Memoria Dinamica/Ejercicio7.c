#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	int n = 0;
	int tam; // Tamaño de las cadenas de caracteres.
	int i = 0;
	printf("Ingresa un número.\n");
	scanf("%d", &n);

	char ** arr = (char **) malloc( n * sizeof(char*)); 
	// Lo que necesitamos para este ejemplo, es que 
	// un puntero a una cadena de caracteres, entonces lo que 
	// creamos con esto, son 3 direcciones de memoria que
	// van a apuntar a las cadenas que vamos a reservar posteriormente.
	for (int i = 0; i < n; ++i){
		scanf("%d",&tam);
		arr[i] = (char * ) malloc(tam  * sizeof(char));
	}
		char * arr_modificado = (char *) realloc(arr[i], sizeof(arr[i])*sizeof(int));


	if(arr == NULL){
		printf("Error, no hay memoria.\n");
		return EXIT_FAILURE;
	}


	for (int i = 0; i < n; i++){
		printf("Introduce la cadena de caracteres numero %d\n", i + 1);
		scanf(" %[^\n]", &arr[i]);
		printf("La cadena que ha introducido en la posicion %d es: %s.\n",i, &arr[i]);
	}

	printf("%s\n",arr);
	free(arr);



	return EXIT_SUCCESS;

}