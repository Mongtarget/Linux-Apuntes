#include <stdio.h>

int main() {
    // 1. EL ARRAY: Creamos 5 espacios con precios
    float precios[5] = {10.5, 20.5, 30.0, 15.0, 24.0};

    // 2. EL ACUMULADOR: Importante inicializarlo en 0.
    // Si no pones "= 0", podría tener "basura" y la suma saldría mal.
    float suma = 0;

    float promedio;

    printf("Calculando la suma de los precios...\n");

    // 3. EL BUCLE: Recorremos del índice 0 al 4
    for (int i = 0; i < 5; i++) {

        // Esta es la línea mágica:
        // "Lo que hay en suma AHORA + el precio NUEVO" -> Guárdalo en suma
        suma = suma + precios[i];

        // (Opcional) Imprimimos para ver qué pasa vuelta por vuelta
        printf("Vuelta %d: Sumo %.2f. Total acumulado: %.2f\n", i, precios[i], suma);
    }

    // 4. EL CÁLCULO FINAL: Fuera del bucle (cuando ya sumamos todo)
    promedio = suma / 5;

    printf("-----------------------------\n");
    printf("La suma total es: %.2f\n", suma);
    printf("El promedio final es: %.2f\n", promedio);

    return 0;
}
