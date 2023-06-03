#include <stdio.h>
#include <stdlib.h>

int main() {
    float notaexamen1,notaexamen2, notapractica, actividadadicional, notafinal;

    printf("Para calcular la nota final de informatica digite las notas de los quiz realizados, la practica  y la actividad adicional.\n");

    printf("Ingrese la nota del Quiz 1: ");
    scanf("%f", &notaexamen1);

    printf("Ingrese la nota del Quiz 2: ");
    scanf("%f", &notaexamen2);

    printf("Ingrese la nota de la práctica: ");
    scanf("%f", &notapractica);

    printf("Ingrese la nota de la actividad adicional: ");
    scanf("%f", &actividadadicional);

    notafinal = (notaexamen1 + notaexamen2 + notapractica + actividadadicional) / 4;

    printf("Su nota final es: %.2f\n", notafinal);
    system("pause");
    return 0;
}
