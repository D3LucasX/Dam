#include<stdio.h>
#include<stdlib.h>
int main(){
	// las direcciones de memoria en un array, si es un array de int,
	//  van de 4 en 4 por que es lo que un int son 4 bites
	//Con un long la direccion de memoria, de uno a otro van de 8 en 8.
	
	int arr[5] = {10, 20, 30, 40, 50};
	int *p = arr;
	int suma = 0;

	for(int i = 0; i < 5; i++){
		suma += *(p + i); // Esto me da el contenido de p + i, que en la primera vuelta sera
				  // 10 + 0. Tambien podria escribirse suma += *(p++);
	}
	printf("La suma de los elementos del array es = %d", suma);

	return EXIT_SUCCESS;
}
//Si hago el bucle for de esta manera for(int i = 5; i > 0; i--){
//y lo imprimes, se sale del bucle hacia atras y le lo que hay en los espacios de memoria anteriores al espacio de memoria donde nosotros tenemos guardado el 10, compila y no da error.
//}
//
//Como muevo el indice donde quiero tener mi puntero en un array?
//
//int arr[5] = {10, 20, 30, 40, 50};
//si quiero que la variable acceda al final como esta en el ejemplo de antes debere de
//p = arr + 5 --> porque arr empieza en 0 y suma 5, te pasas del array, para que en la primera vuelta
//empieze en el 50, si no lo haria en el 40.
//
//tambien se podria con el ampersan, pero eso no lo queremos porque puedes acceder a algo que sea 
//critico y que tengas problemas, de la forma anterior lo unico que haces es que te mueves por
//las direcciones de memoria, no accedes a ellas
//
//

