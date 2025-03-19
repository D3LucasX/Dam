#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
int num_puntitos(int pisos){
    static int vueltas = 1;
    static int totalPuntos =  0;
    if (pisos == 0){
        return totalPuntos;
    }
    totalPuntos += vueltas;
    vueltas++;
    return num_puntitos(pisos - 1);
    
}
int main (){
    int pisos;
    printf("Cuantos pisos quieres en tu pirámide?");
    scanf("%d", &pisos);
    printf("Total puntitos = %d ", num_puntitos(pisos));





	return EXIT_SUCCESS;

}
