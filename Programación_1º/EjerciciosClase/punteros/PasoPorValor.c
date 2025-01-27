#include<>
#include<>
/**
 * EJEMPLO DE PASO POR VALOR
 *
 */

int main(){
	void incrementar(int n){
		
		printf("Valor recibido%d\n", n)
		n++;
		printf("Valor incrementado en la funcion: %d\n", n)
	}
int main(){
	int valor = 10;
	incrementar(valor); //Le estoy dando el VALOR 10.
	printf("Valor en el main: %d", valor); //Imprime un 10

	return EXIT_SUCCESS;
}
