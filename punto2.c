#include <stdio.h>
#include <stdlib.h>

int main() {
    float fahrenheit, celsius;

    printf("Ingrese la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("La temperatura en grados Celsius es: %.2f\n", celsius);
    system("pause");

    return 0;
}