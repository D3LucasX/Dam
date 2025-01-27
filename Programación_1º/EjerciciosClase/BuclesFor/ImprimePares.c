#include<stdio.h>
#include<stdlib.h>
int main(){
/*	int num = 2;
	for (; num <= 20 ; num += 2){	//Menos eficiente ya que da mas vueltas para ejecutar el resultado.
		printf("%d", num);

		if (num < 20){
		printf(",");
	}
		printf(".");

	return 0;

}*/
int num2 = 0;
for(num2 = 0 ; num2<19 ; num2 += 2 ){ //Ejecucuion mas rapida, ejecuta el resultado dando menos vueltas.
	printf("%d,", num2);
}
printf("%d.", num2);
}
