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
int busqueda_binaria(int* array, int a_buscar, int ini, int fin){
	int mitad = (ini + fin)/2;

	if(ini > fin ){
        	printf("Número no encontrado.\n");
		return -1;
	}else if (a_buscar == array[mitad]){
	        printf("Numero encontrado en la posición %d.\n", mitad);
		return mitad;

	}	
if (array[mitad] > a_buscar){
        return busqueda_binaria(array, a_buscar,ini, mitad - 1); // Mitad -1 para que cuando calculemos otra vez la mitad
								 // no vuelva a comparar una posicion que ya hemos comparado
								 // Si no lo hacemos, la busqueda continuara buscando en la misma
								 // posicion que ya se comparo, lo que puede llevar a una 
								 // recursion infinita. O que intentemos acceder a una posicion
								 // fuera de rango y nos de segmentation fault.
}else {
        return busqueda_binaria(array,a_buscar,mitad + 1, fin);  // Aquí opasa  lo mismo, si no le sumamos uno, volvera a comparar una
								 // posicion que ya se a comparado, lo que daria la opcion de que se
								 // que se produzca una recursion infinita. O que intentemos accedeer a una
								 // posición fuera de rango y que de segmentation fault.
}

}
int pedirNumero(){
        int a_buscar;
        printf("Que número desea buscar?\n");
        scanf("%d", &a_buscar);
        return a_buscar;
}



int main (){
int tamaño = 10;
int array[10] = {-5,1,9,10,11,12,17,120,150,1500};
int ini = 0;
int fin = 9;
int a_buscar;
a_buscar = pedirNumero();
busqueda_binaria(array, a_buscar, ini, fin);


        return EXIT_SUCCESS;
}
