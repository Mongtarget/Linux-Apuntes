#include <stdio.h>

int main() {
    int edad;

    printf("Bienvenido al Club C.\n");
    printf("Por favor, muestra tu identificación (ingresa tu edad): ");

    scanf("%d", &edad);

    // Aquí tomamos la decisión
    if (edad >= 18) {
        printf("Adelante. Puedes pasar.\n");

        // Un if anidado (un if dentro de otro if)
        if (edad > 65) {
            printf("(Tienes descuento de jubilado en las bebidas).\n");
        }

    } else {
        printf("Lo siento, eres menor de edad. Vuelve en unos años.\n");
    }

    return 0;
}

