#include <stdio.h>
#include <stdlib.h>

int main() {
    float radiobase, altura, volumen, PI;
    PI = 3.141592;
    radiobase = 14.5;
    altura = 26.79;

    volumen = (PI * radiobase * radiobase * altura) / 3;

    printf("El volumen del cono es: %.3f\n", volumen);
    system("pause");

    return 0;
}