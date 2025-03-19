#!/bin/bash

# Bucle para recorrer todos los archivos .txt dentro de test1/
for archivo in test1/*.txt; do
    # Comprobamos si el archivo no está vacío usando grep
    if grep -q '.' "$archivo"; then
        echo "El archivo $archivo no está vacío."
    else
        echo "El archivo $archivo está vacío."
    fi
done
