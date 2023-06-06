#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 1;
    double d = 1.0;

    a = 46 % 9 + 4 * 4 - 2;
    printf("El resultado de la expresion 1 es: %d\n", a);

    a = 45 + 43 % 5 * (23 * 3 % 2);
    printf("El resultado de la expresion 2 es: %d\n", a);

    a = 45 + 45 * 50 % --a;
    printf("El resultado de la expresion 3 es: %d\n", a);

    d = 1.5 * 3 + (++d);
    printf("El resultado de la expresion 4 es: %.2f\n", d);

    d = 1.5 * 3 + d++;
    printf("El resultado de la expresion 5 es: %.2f\n", d);

    a %= 3 / a + 3;
    printf("El resultado de la expresion 6 es: %d\n", a);
    
    system("pause");
    return 0;
}
