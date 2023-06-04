#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float lado1, lado2, angulo_grados, angulo_radianes, area, PI;
    PI= 3,141592654;

    printf("Valor del lado 1: ");
    scanf("%f", &lado1);

    printf("Valor del lado 2: ");
    scanf("%f", &lado2);

    printf("Valor del ángulo en grados: ");
    scanf("%f", &angulo_grados);

    
    angulo_radianes = angulo_grados * (PI / 180.0);

    
    area = 0.5 * lado1 * lado2 * sin(angulo_radianes);

    printf("El area del triangulo es: %.2f\n", area);
    system("pause");
    return 0;
}
