#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[5] = {1,2,3,4,5};
        
	/*for (int * p = arr; *p <= 5; p++ ){
		printf("%d", *p);
	}
	//Este bucle esta bal, por que cuando llega a que si el contenido de p es = 5, te dice que si
	//y p pasaria a aumentar 1, entonces ya en ese espacio en memoria no sabemos lo que hay
	//entonces despues del 5 imprimiria una cosa rara, para ello cambiamos la posicion.	
*/
//	for (int * p = arr; *p <= 5; p++ ){
//
	for (int * p = arr; p <=&arr[4/*num de elementos menos 1, o con el menor solo y el mismo numero de elementos que tiene*/]; p++ ){
		//de esta manera si q	que funcionaria ya que la condicion la cambiamos
		//a que cuando mire la siguiente posicion de memoria despues de la ultima, pare.
		printf("Size of arr: %ld\n",sizeof(arr)); //Te da el número de bits en el array

		printf("Size of int: %ld\n",sizeof(int)); //Te da el número de bits de un 
							  //elemento del array
		
		printf("Numero de Elementos del array: %ld\n",sizeof(arr)/sizeof(int));
		//unica forma de saber los elementos de un array que no has declarado tu.
		
		char palabra[10] = "gratis"
			for (char * l = palabra; *l != '\0'; l++)//Como solo hay una ejecucion, 
								 //no hace falta poner las llaves
				printf("%c", *l);
	}
	return 0;
}

