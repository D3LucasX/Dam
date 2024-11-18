#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int main (){
	int arr[7] = {5,6,8,9,5,6,1};
	for (int i = 0; i < 7; i++){
		for( int j = 0; j < 6; j++){
		if(arr[j] > arr[j + 1]){
			int tempo = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tempo;
		}
		}
	}
		for (int i = 0; i < 7; i++){
		printf("\n%d\n", arr[i]);
		}


	return EXIT_SUCCESS;

}
