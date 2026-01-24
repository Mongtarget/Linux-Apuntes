#include <stdio.h>

int main(){
    char nombre[20]; // Espacio para 19 letras + 1 nulo
    int repeticiones;

    printf("Tu nombre: ");
    scanf("%s", nombre); // ¡SIN EL &!

    printf("Ingrese cantidad de veces:");
    scanf("%d", &repeticiones);


    for (int i = 0; i < repeticiones ; i++ ) {
        printf("%d. Hola %s\n", i+1, nombre);

    }

    return 0;


}
