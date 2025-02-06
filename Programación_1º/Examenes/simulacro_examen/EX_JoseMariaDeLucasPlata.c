#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	int tamano1 = 0; 
	int tamano2 = 0;
	int decision = 0;
	int tamanoSuma, tamanoConca;
printf("Dime el tamsaño del array.\n");
scanf("%d", &tamano1);
int* array1 = (int*) malloc (tamano1 * sizeof(int));
if(array1== NULL) {
                printf("No hay espacio en memoria para el array suma.\n");
                return EXIT_FAILURE;
            }
for(int i = 0; i < tamano1; i++){
	array1[i] = i * 2;
	printf("%d", array1[i]);
}
printf("\n");

printf("Dime el tamsaño del array 2.\n");
scanf("%d", &tamano2);
int* array2 = (int*) malloc (tamano2 * sizeof(int));
if(array2== NULL) {
                printf("No hay espacio en memoria para el array suma.\n");
                return EXIT_FAILURE;
            }
for(int i = 0; i < tamano2; i++){
	array2[i] = i * 2;
	printf("%d", array2[i]);
}
printf("\n");

printf("Si quiere sumar coordenada a coordenada pulse 1, si quiere concatenar cadenas, pulse 2.\n");
scanf("%d", &decision);

	if (decision == 1){
		if (tamano1 > tamano2){
			tamanoSuma = tamano1;
		} else{
			tamanoSuma = tamano2;
		}
		int* arraySuma = (int*) malloc(tamanoSuma * sizeof(int));
		if(arraySuma== NULL) {
                printf("No hay espacio en memoria para el array suma.\n");
                return EXIT_FAILURE;
            }
		for (int i = 0; i < tamanoSuma; i++){
			arraySuma[i] = array1[i] + array2[i];
			printf("%d", arraySuma[i]);
		}
		free(arraySuma);
	}else if(decision == 2){
		tamanoConca = tamano1 + tamano2;

		int* arrayConca = (int*) malloc(tamanoConca * sizeof(int));
		if(arrayConca== NULL) {
                printf("No hay espacio en memoria para el array suma.\n");
                return EXIT_FAILURE;
            }
		for(int i = 0; i <= tamano1; i++){
			arrayConca[i] = array1[i];
			printf("%d", arrayConca[i]);
		}
		tamano1++;
		for(int i = 0; i <= tamano2; i ++){
			arrayConca[tamano1] = array2[i];
			printf("%d", arrayConca[tamano1]);
			tamano1++;
		}
		free(arrayConca);
	}
	free(array1);
	free(array2);

	return EXIT_SUCCESS;

}
