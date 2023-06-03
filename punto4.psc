Algoritmo CalcularNotaFinal
    Definir notaexamen1, notaexamen2, notapractica, actividadadicional, notafinal como Reales
	
    Escribir "Para calcular la nota final de informatica digite las notas de los quiz realizados, la practica y la actividad adicional."
    Escribir "Ingrese la nota del Quiz 1: "
    Leer notaexamen1
	
    Escribir "Ingrese la nota del Quiz 2: "
    Leer notaexamen2
	
    Escribir "Ingrese la nota de la práctica: "
    Leer notapractica
	
    Escribir "Ingrese la nota de la actividad adicional: "
    Leer actividadadicional
	
    notafinal <- (notaexamen1 + notaexamen2 + notapractica + actividadadicional) / 4
	
    Escribir "Su nota final es: ", notafinal
FinAlgoritmo
