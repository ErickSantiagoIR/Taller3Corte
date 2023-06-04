#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float lado1, lado2, angulo, area;

    printf("Ingrese el valor del lado 1: ");
    scanf("%f", &lado1);

    printf("Ingrese el valor del lado 2: ");
    scanf("%f", &lado2);

    printf("Ingrese el valor del angulo en radianes: ");
    scanf("%f", &angulo);


    area = 0.5 * lado1 * lado2 * sin(angulo);

    printf("El area del triangulo es: %.2f\n", area);
    system("pause");
    return 0;
}
