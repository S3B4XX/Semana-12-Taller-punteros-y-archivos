#include <stdio.h>
#include "funciones.h"
#include "lectura.h"





int main() {
    int codigos[MAXI];
    char nombres[MAXI][50];
    int cantidades[MAXI];
    float precios[MAXI];
    int cantidad_productos = 0;

    int opcion;
    do {
        printf("1. Ingresa un producto\n");
        printf("2. Mirar inventario\n");
        printf("3. Encuentra tu producto\n");
        printf("4. Guardar inventario\n");
        printf("5. Salir\n");
        opcion = leerenteroentre("Introduce una opcion: ", 1, 5);
        switch (opcion) {
            case 1:
                agregar_producto(codigos, nombres, cantidades, precios, &cantidad_productos);
                break;
            case 2:
                mostrar_inventario(codigos, nombres, cantidades, precios, cantidad_productos);
                break;
            case 3:
                buscar_producto(codigos, nombres, cantidades, precios, cantidad_productos);
                break;
            case 4:
                guardar_inventario(codigos, nombres, cantidades, precios, cantidad_productos);
                break;
            case 5:
                printf("Adiós.\n");
                break;
        }
        if (opcion == 1) {
            cantidad_productos++;
        }
    } while (opcion != 5);

    return 0;
}
