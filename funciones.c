#include "funciones.h"
#include "lectura.h"
#include <stdio.h>
void agregar_producto(int *codigos, char (*nombres)[50], int *cantidades, float *precios, int *cantidad_productos) {
    codigos[*cantidad_productos] = leerEnteroPositivo("Introduce el codigo del producto: ");
    printf("Introduce el nombre del producto: ");
    scanf("%s", nombres[*cantidad_productos]);
    cantidades[*cantidad_productos] = leerEnteroPositivo("Introduce la cantidad del producto: ");
    precios[*cantidad_productos] = leerFlotantePositivo("Introduce el precio del producto: ");
}

void mostrar_inventario(int *codigos, char (*nombres)[50], int *cantidades, float *precios, int cantidad_productos) {
    printf("Inventario:\n");
    for (int i = 0; i < cantidad_productos; i++) {
        printf("Código: %d, Nombre: %s, Cantidad: %d, Precio: %.2f\n", codigos[i], nombres[i], cantidades[i], precios[i]);
    }
}

void buscar_producto(int *codigos, char (*nombres)[50], int *cantidades, float *precios, int cantidad_productos) {
    int codigo_buscar = leerEnteroPositivo("Introduce el codigo del producto a buscar: ");
    for (int i = 0; i < cantidad_productos; i++) {
        if (codigos[i] == codigo_buscar) {
            printf("Producto encontrado:\n");
            printf("Código: %d, Nombre: %s, Cantidad: %d, Precio: %.2f\n", codigos[i], nombres[i], cantidades[i], precios[i]);
            return;
        }
    }
    printf("Producto no encontrado.\n");
}

void guardar_inventario(int *codigos, char (*nombres)[50], int *cantidades, float *precios, int cantidad_productos) {
    FILE *archivo = fopen("inventario.txt", "w");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo\n");
        return;
    }

    for (int i = 0; i < cantidad_productos; i++) {
        fprintf(archivo, "Código: %d\nNombre: %s\nCantidad: %d\nPrecio: %.2f\n\n", 
                codigos[i], nombres[i], cantidades[i], precios[i]);
    }

    fclose(archivo);
    printf("Inventario guardado en 'inventario.txt'\n");
}
