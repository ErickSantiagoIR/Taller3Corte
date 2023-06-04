#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float capitalprestado, interesanual, duracionprestamo, cuotamensual, plazo, interesmensual, cantidadfinal, intereses;

    printf("Ingrese el capital prestado: ");
    scanf("%f", &capitalprestado);

    printf("Ingrese el interes anual: ");
    scanf("%f", &interesanual);

    printf("Ingrese la duracion en años de el prestamo: ");
    scanf("%f",&duracionprestamo);

    interesmensual = interesanual / 12,0; //divimos por 12 meses

    plazo = duracionprestamo * 12,0; //multiplicamos por 12 meses

    cuotamensual = (capitalprestado * interesmensual) / (100 * (1-(1 + (interesmensual / 100 - plazo))));
    
    cantidadfinal = plazo * cuotamensual;
    
    intereses = cantidadfinal - capitalprestado;
    
    printf("La cuota mensual que debe pagar es de: %.2f\n",cuotamensual);
    printf("La cantidad de amortizacion es de: %.0f\n",capitalprestado);
    printf("La cantidad de intereses pagados es: %.2f\n", intereses);
    printf("La cantidad de total pagada es: %.2f\n", cantidadfinal);
    system("pause");
    return 0;
}