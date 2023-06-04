Algoritmo AreaTrianhulo
Definir lado1, lado2, angulo_grados, angulo_radianes, area, numeropi como Real
numeropi = 3.141592654

Escribir "Valor del lado 1: "
Leer lado1

Escribir "Valor del lado 2: "
Leer lado2

Escribir "Valor del ángulo en grados: "
Leer angulo_grados

angulo_radianes = angulo_grados * (PI / 180.0)

area = 0.5 * lado1 * lado2 * sen (angulo_radianes)

Escribir "El área del triángulo es: ", area
FinAlgoritmo
