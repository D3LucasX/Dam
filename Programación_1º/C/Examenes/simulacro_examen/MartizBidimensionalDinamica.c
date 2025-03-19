#include <stdio.h>
#include <stdlib.h>  // Para malloc y free

int main() {
    int n = 3;      // Número de punteros
    int tamalo = 4; // Tamaño de cada array al que apunta cada puntero

    // Crear el array de punteros a int de tamaño n
    int **arr = (int**)malloc(n * sizeof(int*));

    // Comprobamos si malloc tuvo éxito
    if (arr == NULL) {
        printf("Error al asignar memoria para el array de punteros.\n");
        return 1;  // Salir con error
    }

    // Asignamos memoria dinámica para cada uno de los arrays de tamaño tamalo
    for (int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(tamalo * sizeof(int));  // Asignamos memoria para 'tamalo' ints
        
        // Comprobamos si malloc tuvo éxito
        if (arr[i] == NULL) {
            printf("Error al asignar memoria para el array en arr[%d].\n", i);
            return 1;
        }
    }

    // Asignamos valores a cada uno de los arrays
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < tamalo; j++) {
            arr[i][j] = (i + 1) * 10 + j;  // Por ejemplo, asignamos algunos valores
        }
    }

    // Imprimimos los valores
    for (int i = 0; i < n; i++) {
        printf("Array arr[%d]: ", i);
        for (int j = 0; j < tamalo; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Liberamos la memoria
    for (int i = 0; i < n; i++) {
        free(arr[i]);  // Liberamos la memoria del array al que apunta arr[i]
    }
    free(arr);  // Liberamos la memoria del array de punteros

    return 0;
}