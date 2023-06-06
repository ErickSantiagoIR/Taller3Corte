#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    
    float f, alfa, lambda, sigma, radiobase, altura, volumen, PI, fahrenheit, celsius, tiempoensegundos, horas, minutos, segundos, notaexamen1,notaexamen2, notapractica, actividadadicional, notafinal, r, a, b, c, d, resultado, sueldobase, complementodes, comcargoacademico, sueldobruto, retencion, sueldoneto, lado1, lado2, angulo, area, ladouno, ladodos, angulo_grados, angulo_radianes, areaa, nPI, capitalprestado, interesanual, duracionprestamo, cuotamensual, plazo, interesmensual, cantidadfinal, intereses;
    int x, y, horasextra, numhijos, numayoresdep, porcentajeirpf;
    x = 12;
    sigma = 2.1836;
    y = 3;
    lambda = 1.11695;
    alfa = 328.67;
    nPI= 3,141592654;
    int aa = 1;
    double dd = 1.0;

        printf("\n");
    printf("Punto 1.\n"); //PUNTO_1
        printf("\n");
    PI = 3.141592;
    radiobase = 14.5;
    altura = 26.79;

    volumen = (PI * radiobase * radiobase * altura) / 3;

    printf("El volumen del cono es: %.3f\n", volumen);
        printf("\n");
    printf("Punto 2.\n"); //PUNTO_2
        printf("\n");
    printf("Ingrese la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("La temperatura en grados Celsius es: %.2f\n", celsius);
        printf("\n");
    printf("Punto 3.\n"); //PUNTO_3
        printf("\n");
    printf("Ingrese el tiempo en segundos: ");
    scanf("%f", &tiempoensegundos);

    horas = tiempoensegundos / 3600;
    tiempoensegundos = fmod(tiempoensegundos, 3600);
    minutos = tiempoensegundos / 60;
    segundos = fmod(tiempoensegundos, 60);

    printf("El tiempo dado es %.0f horas, %.0f minutos, %.0f segundos\n", horas, minutos, segundos);
        printf("\n");
    printf("Punto 4.\n"); //PUNTO_4
        printf("\n");
    printf("Para calcular la nota final de informatica digite las notas de los quiz realizados, la practica  y la actividad adicional.\n");

    printf("Ingrese la nota del Quiz 1: ");
    scanf("%f", &notaexamen1);

    printf("Ingrese la nota del Quiz 2: ");
    scanf("%f", &notaexamen2);

    printf("Ingrese la nota de la practica: ");
    scanf("%f", &notapractica);

    printf("Ingrese la nota de la actividad adicional: ");
    scanf("%f", &actividadadicional);

    notafinal = (notaexamen1 + notaexamen2 + notapractica + actividadadicional) / 4;

    printf("Su nota final es: %.2f\n", notafinal);
        printf("\n");
    printf("Punto 5.\n"); //PUNTO_5
        printf("\n");
    printf("Ingrese el valor de r: ");
    scanf("%f", &r);

    printf("Ingrese el valor de a: ");
    scanf("%f", &a);

    printf("Ingrese el valor de b: ");
    scanf("%f", &b);

    printf("Ingrese el valor de c: ");
    scanf("%f", &c);

    printf("Ingrese el valor de d: ");
    scanf("%f", &d);

    resultado = ((4.0) /( 3.0 * r + 34)) - (9 * (a + b * c)) + ((3 + d * (2 + a)) / (a + b * d));

    printf("El resultado es: %.2f\n", resultado);
        printf("\n");
    printf("Punto 6.\n");
        printf("\n");
    f = 3 * x * ((x + sigma * y) / ((x * x) - (y * y))) - (lambda) * (alfa - 13.7);

    printf("El valor de f es: %.2f\n", f);
        printf("\n");
    printf("Punto 7.\n"); //PUNTO_7
        printf("\n");
    //pedimos los datos
    printf("Ingrese el sueldo base: ");
    scanf("%f",&sueldobase);

    printf("Ingrese el complemneto de destino: ");
    scanf("%f",&complementodes);

    printf("Ingrese el complemento de cargo academico: ");
    scanf("%f",&comcargoacademico);

    printf("Ingrese las horas extra rwalizadas: ");
    scanf("%d",&horasextra);

    printf("Ingrese el numero de hijos: ");
    scanf("%d",&numhijos);

    printf("Ingrese el numero de mayores dependientes: ");
    scanf("%d",&numayoresdep);
    
    sueldobruto = sueldobase + complementodes + comcargoacademico + (23 * horasextra); //calculamos el sueldo bruto

    porcentajeirpf = 24 - (2 * numhijos) - numayoresdep; //calculamos el porcentaje de impuestos

    retencion = (sueldobruto * porcentajeirpf) / 100; //calculamos los impuestos de retencion

    sueldoneto = sueldobruto - retencion; //calculamos el sueldo neto

    //Imprimimos en pantalla los resultados
    printf("Sueldo base: %.2f $\n",sueldobase);
    printf("Complemento de destino: %.2f $\n",complementodes);
    printf("Complemento de cargo academicp: %.2f $\n",comcargoacademico);
    printf("Horas extra realizadas: %d\n",horasextra);
    printf("Hijos: %d\n",numhijos);
    printf("Mayores: %d\n",numayoresdep);
    printf("Calculo de la nomina.\n");
    printf("Sueldo bruto: %.2f $\n",sueldobruto);
    printf("Porcentaje IRPF: %d%%\n",porcentajeirpf);
    printf("Retencion por IRPF: %.2f $\n",retencion);
    printf("Sueldo neto: %.2f $\n",sueldoneto);
        printf("\n");
    printf("Punto 8.\n"); //PUNTO_8
        printf("\n");
    aa = 46 % 9 + 4 * 4 - 2;
    printf("El resultado de la expresion 1 es: %d\n", aa);

    aa = 45 + 43 % 5 * (23 * 3 % 2);
    printf("El resultado de la expresion 2 es: %d\n", aa);

    aa = 45 + 45 * 50 % --aa;
    printf("El resultado de la expresion 3 es: %d\n", aa);

    dd = 1.5 * 3 + (++dd);
    printf("El resultado de la expresion 4 es: %.2f\n", dd);

    dd = 1.5 * 3 + d++;
    printf("El resultado de la expresion 5 es: %.2f\n", dd);

    aa %= (3 / aa) + 3;
    printf("El resultado de la expresion 6 es: %d\n", aa);
        printf("\n");
    printf("Punto 9.\n"); //PUNTO_9
        printf("\n");
    printf("Ingrese el valor del lado 1: ");
    scanf("%f", &lado1);

    printf("Ingrese el valor del lado 2: ");
    scanf("%f", &lado2);

    printf("Ingrese el valor del angulo en radianes: ");
    scanf("%f", &angulo);


    area = 0.5 * lado1 * lado2 * sin(angulo);

    printf("El area del triangulo es: %.2f\n", area);
        printf("\n");
    printf("Punto 10.\n"); //PUNTO_10
        printf("\n");
    printf("Valor del lado 1: ");
    scanf("%f", &ladouno);

    printf("Valor del lado 2: ");
    scanf("%f", &ladodos);

    printf("Valor del angulo en grados: ");
    scanf("%f", &angulo_grados);

    
    angulo_radianes = angulo_grados * (nPI / 180.0);

    
    areaa = 0.5 * ladouno * ladodos * sin(angulo_radianes);

    printf("El area del triangulo es: %.2f\n", areaa);
        printf("\n");
    printf("Punto 11.\n"); //PUNTO_11
        printf("\n");
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