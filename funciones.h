#define MAXI 100

void agregar_producto(int *codigos, char (*nombres)[50], int *cantidades, float *precios, int *cantidad_productos);
void mostrar_inventario(int *codigos, char (*nombres)[50], int *cantidades, float *precios, int cantidad_productos);
void buscar_producto(int *codigos, char (*nombres)[50], int *cantidades, float *precios, int cantidad_productos);
void guardar_inventario(int *codigos, char (*nombres)[50], int *cantidades, float *precios, int cantidad_productos);