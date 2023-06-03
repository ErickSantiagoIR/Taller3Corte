Algoritmo CalcularF
    Definir x como Entero
    Definir sigma como Real
    Definir ye como Entero
    Definir lambda como Real
    Definir alfa como Real
    Definir f como Real
	
    x <- 12
    sigma <- 2.1836
    ye <- 3
    lambda <- 1.11695
    alfa <- 328.67
	
    f <- 3 * x * ((x + sigma * ye) / ((x * x) - (ye * ye))) - lambda * (alfa - 13.7)
	
    Escribir "El valor de f es: ", f
FinAlgoritmo
