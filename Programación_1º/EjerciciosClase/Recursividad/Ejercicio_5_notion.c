#include<stdio.h>
#include<stdlib.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
 // Lo que hace es que la profundidad va guardando todos los parentesis que se abren, y el balance bva comprobando que todos los parentesis que se abren, se cierren.
 int prof(char* cadena, int balance){
    static int profundidad_maxima = 0; // Esta variable lo que hace es que cuando se llama otra vez a si misma
                                       // sigue guardando el valor que tenía cuando se ejecuto la funcion antes.
    if (*cadena == '\0'){
        return profundidad_maxima;
    }
    if (balance > profundidad_maxima){
        profundidad_maxima = balance;
    }
    if(*cadena == '('){
        // Con ternaria
        //profundidad_maxima = balance > profundidad_maxima ? balance : profundidad_maxima;

        // Con condicional if
        return prof(cadena+1, balance +1);
    }else if(*cadena == ')'){
        return prof(cadena+1, balance-1);
    }else{
        return prof(cadena+1, balance);
    }
 }
int main (){
    char cadena[] = "((())(()))";
    int balance = 0;
    int profundidad = prof(cadena, balance);
    printf("%d", profundidad);
    char2[] = "((()))(())"
    profundidad = prof(cadena, balance);
    printf("%d", profundidad);
    // Lo que pasa aqui, es que la variable estatica sigue guardando el valor que tenia cuando se llamo la funcion 
    // anteriormente, por lo que hay que tener cuidado con usar variables estáticas.
    // Como solucionarlo?
    // CASO 1:
    // en el caso base de la funcion, asignamos el valor actual de profundidad_maxima a otra variable, poner profundidad_maxima a 0
    // y retornar la variable esa que hemos creado con el valor que tenía profundidad_maxima.
    // cASO 2:
    // qUITAR LA VARIABLE ESTATICA Y PASAR EL VALOR DE LA VARIABLE POR ARGUMENTO.

	return EXIT_SUCCESS;

}
