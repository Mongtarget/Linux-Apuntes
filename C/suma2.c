#include <stdio.h>
int main() {

    int number1, number2, rest;

    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculate the sum
    rest = number1 - number2;

    printf("%d - %d = %d", number1, number2, rest);
    return 0;
}
