#include <stdio.h>

int main() {

    // i += 2 significa i = i + 2
    for (int i = 0; i < 10; i += 2) {
        printf("%d ", i);
    }
    // Salida: 0 2 4 6 8 (El 10 no sale porque la condición es < 10)

}
