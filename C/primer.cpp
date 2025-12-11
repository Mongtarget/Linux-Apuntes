#include <stdio.h>

int main() {
    // 1. Declaración de variables
    int nivel_seguridad = 5;
    float version_kernel = 6.6827364;
    char rango = 'A'; // Usa comillas simples para un solo caracter

    // 2. Mostrar datos
    printf("=== SISTEMA INICIADO ===\n");
    printf("Nivel de acceso: %d\n", nivel_seguridad);
    printf("Versión del Kernel: %.1f\n", version_kernel); // El .1 es para mostrar solo 1 decimal
    printf("Rango del usuario: %c\n", rango);

    return 0;
}
