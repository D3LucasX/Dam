#include<stdio.h>
#include<stdlib.h>

int main(){
	int adivin = 99;

	int num;
	do{
	printf("Adivina el número del 1 al 100: ");
	scanf("%d", &num);

	
		if (num == adivin){
			printf("Has acertado!\n");
		}else{
			printf("Has fallado\n");
		}
	}while(num != adivin);

	return 0;
}
// int r;
// while(1){
// r = rand(); % 8;      //modulo 8 genera numeros aleatorios entre 0 y 7
// printf("%lf", r);
// }
// return EXIT_SUCCESS;  //Esto genera un numero aleatorio entre un valor 0 y randm max(valor random)
//
//
//
//
// int r;
//
// srand(10 por ejemplo);	//Establece la semilla de genaracion de calculo, determina donde
// 				 empezara a generar ese calculo para empezar a generar la sucesion 
// 				 de numeros. En este caso como esta dentro del bucle me generara siempre el mismo número ya que la semilla siempre estara en el 10. 
// for(int i = 0; i<4; i++){
// r = rand(); % 8; 		//si pongo r = (rand(); % 10) + 10; --> Esto me genera numeros
// 				  Aleatorios entre 10 y 20, si quisiera numeros pares, deberia de 
// 				  multiplicarlo por 2 y me generaria numeros pares a partir de 10.    	     
// printf("%lf", r);
// }
// return EXIT_SUCCESS;  
//
//
//
// int r;
// srand(time(NULL)); //Cada segundo
// srand(getpid());  //Identificador del proceso
// while(1){
// r = rand(); % 8;     
// printf("%lf", r);
// }
// return EXIT_SUCCESS;  //Esto genera un numero aleatorio entre un valor 0 y randm max(valor random)
