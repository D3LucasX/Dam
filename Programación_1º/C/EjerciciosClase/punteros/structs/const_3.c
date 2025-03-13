#include <stdio.h>

int main() {
    int numero = 10;
    int trampa = 30;

    const int * const ptr = &numero;  // De esta manera no podria nunca cambiar.

    printf("Valor: %d\n", *ptr);

    //*ptr = 20;  // Esto daría un error porque el valor es constante
    numero = 20;   // Cambiar el valor directamente es válido
    printf("Nuevo valor: %d\n", *ptr);

    // VAMOS A TRAMPEAR:
    ptr = &trampa;
    printf("Nuevo valor: %d\n", *ptr);

    return 0;
}