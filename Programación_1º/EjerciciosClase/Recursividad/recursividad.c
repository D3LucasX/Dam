#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
/* int array[10] = {-5,1,9,10,11,12,17,120,150,1500};
   int a_buscar = 120;
   int encontrado = busqueda_binaria(array, 10, a_buscar); == int busqueda_binaria(int* array, int tam int a_buscar){}
   necesitaremos una funcion int Busqueda_recursiva, que se llamara en la otra función*/

/* opcion buena --> int busqueda_binaria(int* array, int a_buscar, int inicio, int fin){}*/ 
int busqueda_binaria(int* array, int a_buscar, int ini, int fin){
int mitad = (ini + fin)/2; 
if (a_buscar == array[mitad]){
	return 1;
}else if(ini - fin = 2 && ){


}

if (array[mitad] > a_buscar){
	return busqueda_binaria(array, a_buscar,ini, mitad);
}else if(array[mitad] < a_buscar){
	return busqueda_binaria(array,a_buscar,mitad, fin);
}

}


int main (){
int tamaño = 10;
int array[10] = {-5,1,9,10,11,12,17,120,150,1500};
int a_buscar = 120;
busqueda_binaria(array, 120, 0, 9);


	return EXIT_SUCCESS;

}
