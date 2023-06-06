#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int horasextra, numhijos, numayoresdep, porcentajeirpf;
    float sueldobase, complementodes, comcargoacademico, sueldobruto, retencion, sueldoneto;

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
    system("pause");
    return 0;
}