#include <stdio.h>

int main() {
    int num1;
    int num2;
    int resultado;

    printf("Ingrese primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese segundo numero ");
    scanf("%d", &num2);

    resultado = num1 + num2;

    printf("La suma es: %d\n", resultado);
    return 0;
}
