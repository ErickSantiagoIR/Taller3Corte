Algoritmo ConvertirTiempo
    Definir tiempoensegundos, horas, minutos, segundos como real
	
    Escribir("Ingrese el tiempo en segundos: ")
    Leer tiempoensegundos
	
    horas <- tiempoensegundos / 3600
    tiempoensegundos <- tiempoensegundos MOD 3600
    minutos <- tiempoensegundos / 60
    segundos <- tiempoensegundos MOD 60
	
    Escribir"El tiempo dado es ", horas, " horas, ", minutos, " minutos, ", segundos, " segundos"
FinAlgoritmo
