#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
 int SumarDigitos(int num){
    if(num / 10 <= 0){
        return 0; 
    }
    return num % 10 + SumarDigitos(num / 10);
 }
int main (){
    // Caso iterativo.
    int num = 1981, acumular;
    while (num/10 <= 0){
        acum += num%10
    }



	return EXIT_SUCCESS;

}