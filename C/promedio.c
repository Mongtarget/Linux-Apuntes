#include <stdio.h>

int main() {
    // Declaramos e inicializamos el array de una vez
    int notas[4] = {15, 18, 12, 20};

    // Imprimir todas las notas usando un bucle
    printf("Mis notas son:\n");

    // i empieza en 0 y va hasta 3 (porque i < 4)
    for (int i = 0; i < 4; i++) {
        printf("Nota %d: %d\n", i, notas[i]);
    }

    // Fíjate en notas[i].
    // Cuando i vale 0, accede a notas[0].
    // Cuando i vale 1, accede a notas[1], etc.

    return 0;
}
