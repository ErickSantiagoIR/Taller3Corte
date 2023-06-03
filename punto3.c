#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float tiempoensegundos, horas, minutos, segundos;

    printf("Ingrese el tiempo en segundos: ");
    scanf("%f", &tiempoensegundos);

    horas = tiempoensegundos / 3600;
    tiempoensegundos = fmod(tiempoensegundos, 3600);
    minutos = tiempoensegundos / 60;
    segundos = fmod(tiempoensegundos, 60);

    printf("El tiempo dado es %.0f horas, %.0f minutos, %.0f segundos\n", horas, minutos, segundos);
    system("pause");
    return 0;
}
