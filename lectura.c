#include "lectura.h"
#include <stdio.h>

int leerentero(char* mensaje) {
    int valor;
    printf("%s", mensaje);
    scanf("%d", &valor);
    return valor;
}

int leerEnteroPositivo(char* mensaje) {
    int valor;
    do {
        printf("%s", mensaje);
        scanf("%d", &valor);
    } while (valor <= 0);
    return valor;
}

int leerenteroentre(char* mensaje, int a, int b) {
    int valor;
    do {
        printf("%s", mensaje);
        scanf("%d", &valor);
    } while (valor < a || valor > b);
    return valor;
}

int leerenteromayora(char* mensaje, int a) {
    int valor;
    do {
        printf("%s", mensaje);
        scanf("%d", &valor);
    } while (valor < a);
    return valor;
}

float leerflotante(char* mensaje) {
    float valor;
    printf("%s", mensaje);
    scanf("%f", &valor);
    return valor;
}

float leerFlotantePositivo(char* mensaje) {
    float valor;
    do {
        printf("%s", mensaje);
        scanf("%f", &valor);
    } while (valor <= 0);
    return valor;
}

float leerflotantentre(char* mensaje, float a, float b) {
    float valor;
    do {
        printf("%s", mensaje);
        scanf("%f", &valor);
    } while (valor < a || valor > b);
    return valor;
}

float leerflotantemayora(char* mensaje, float a) {
    float valor;
    do {
        printf("%s", mensaje);
        scanf("%f", &valor);
    } while (valor < a);
    return valor;
}

char leercaracter(char* mensaje) {
    char valor;
    printf("%s", mensaje);
    scanf(" %c", &valor);  
    return valor;
}
