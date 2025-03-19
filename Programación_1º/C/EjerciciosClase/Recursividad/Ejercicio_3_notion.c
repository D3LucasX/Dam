#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/*
 *
 * 	Autor: Jose Maria De Lucas Plata.
 *
 */
 int es_vocal(char letra){
     // Convertir el carácter a minúscula para simplificar la comparación
     c = tolower(c);
    
     // Verificar si el carácter es una vocal (a, e, i, o, u)
     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
         return 1;  // Es una vocal
     }
     
     return 0;  // No es una vocal
 }
 }
 void imprimirVocales(char* palabra){
    if (*palabra == \0);
    return;
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        printf("%c", *palabra);
    imprimirVocales(palabra++);
    
    

 }
int main (){
    char* palabra = "murcielago";
    


	return EXIT_SUCCESS;

}
