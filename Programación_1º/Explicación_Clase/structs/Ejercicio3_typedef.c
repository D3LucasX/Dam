#include <stdio.h>
#include<string.h>
#define MAX_ITEMS 100


typedef struct{
	char Nombre[50];
	char direccion[100];
	int telefono[13];
}Proveedor;

typedef struct{
	char nombre[100];
	int Precio;
	Proveedor proveedor;
}Articulo;

typedef struct{
	Articulo articulo[MAX_ITEMS];
	int cantidad[MAX_ITEMS];
	int totalArticulos;
}Inventario;

int main() {
	Inventario miInventario;
	//Solo es valida en la declaración.
	Articulo articulo = {"Teclados", 100{"MediaMarkt", "C/Iulian, Alcala De Henares, 29908",{6,0,6,1,7,5,2,3,4}}}
	//Para el articulo uno ya habria que hacerlo todo a mano uno a uno, con strcpy.
	miInventario[0] = articulos;
	miInventario.cantidades[0] = 10;

	printf("Nombre del artículo: %s\n", miInventario.articulo[0].nombre);

	printf("Cantidad: %d\n", miInventario.articulos[0].cantidad);

	printf("Nombre del proveedor: %s\n", miInventario.articulos[0].proveedor.nombre);
	return EXIT_SUCCESS;

	//*int Num_proveedores;
    //Proveedor MisProveedores;
    //printf("Cuantos proveedores tienes? \n");
    //scanf("%d", Num_proveedores);
    //for (i = 0; i < Num_proveedores; i++){
	    //printf("Proveedor %d:", i + 1);
	    //printf("Nombre: ");
	    //scnaf(" [^\n]", MisProveedores[i].nombre);
	    //printf("Direccion: ");
	    //scanf("[^\n]", MisProveedores[i].direccion);
    }


    return 0;
}
