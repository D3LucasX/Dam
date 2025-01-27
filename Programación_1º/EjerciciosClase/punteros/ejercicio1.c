#include<>
#include<>
int main(){
	float x = 10.2;
	float *p;
	p = &x;
	//Si el puntero en este caso lo iniciamos como un int en vez de como un float,
	//el contenido de p no es lo que deberia de darnos. compilaria, pero te muestra un warning.
	
	printf("Valor de x: %f", x);
	printf("Direccion de x: %p\n", &x);
	printf("Valor de p (Direccion de x) %p\n", p);
	printf("Valor apuntado por p: %f\n", *p);
	return EXIT_SUCCESS;
}
