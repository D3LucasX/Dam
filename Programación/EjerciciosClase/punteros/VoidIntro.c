#include<stdio.h>
#include<stdlib.h>

void printValor(void * ptr, char tipo){ //Con ewsto transformamos un void a una variable, en este caso
					//a double. Esto se llama casting.Para que si no sabes que tipo de  variable usaras, la funcion te lo cambiara a la que tengas en el main
	switch(tipo){
		case 'd':
			printf("Double %lf\n", * ((double *)ptr); //Con esto accedo al contenido
								//del puntero double
			break;
		case 'i':
			printf("Entero: %d\n", * ((int *)ptr);
			
			break;

		default:
			printf("Error\n");
	}
}
int main(){
	double num = 10;
	
	void * dir = &num;
	printValor(dir, 'd'); // con el 'd' pasamos el char de la función, en el segundo caso
	printValor(dir, 'i'); // pondria una i
	printf("%ld\n", sizeof(dir)); //Siempre va a tener 8, es generico por si no sabes que
				      // variable vas a usar
	return 0;

}
