Algoritmo Calcularcuotamensual
	Definir capitalprestado, interesanual,  duracionprestamo, cuotamesual, plazo, interesmensual, cantidadfinal, intereses como Real
	Escribir "Ingrese el capital prestado"
	Leer capitalprestado
	Escribir "Ingrese el interes anual"
	Leer interesanual
	Escribir "Imgrese la duracion en años del prestamo"
	Leer duracionprestamo
	
	interesmensual = interesanual / 12
	plazo = duracionprestamo * 12
	
	cuotamensual = (capitalprestado * interesmensual) / (1-(1 + (interesmensual / 100 - plazo))*100)
	
	cantidadfinal = plazo * cuotamensual
	
	intereses = cantidadfinal - capitalprestado
	Escribir "La cuota mensual quee debe pagar es de ",cuotamensual ","
	Escribir "La cantidad de amortizacion es de ",capitalprestado ","
	Escribir "La cantidad de intereses pagados es de ", intereses ", "
	escribir "La cantidad de total pagada es ", cantidadfinal ","
FinAlgoritmo
