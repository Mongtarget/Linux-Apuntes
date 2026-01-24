#include <stdio.h>

// 1. PROTOTIPO (El aviso)
// Le decimos a C: "Voy a crear una función que devuelve un int y recibe dos int"
int sumar(int numero1, int numero2);

int main() {
    int x = 10;
    int y = 5;
    int total;

    // 2. LLAMADA (El uso)
    // El programa salta a la función, calcula, y vuelve aquí con el resultado
    total = sumar(x, y);

    printf("La suma es: %d\n", total);

    // Podemos reutilizarla con otros números sin reescribir la lógica
    printf("Otra suma: %d\n", sumar(100, 50));

    return 0;
}

// 3. DEFINICIÓN (La lógica real)
int sumar(int numero1, int numero2) {
    int respuesta;
    respuesta = numero1 + numero2;
    return respuesta; // Devuelve el valor al main
}
