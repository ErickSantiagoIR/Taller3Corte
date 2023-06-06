Algoritmo CalculoNomina
    Definir horasextra, numhijos, numayoresdep, porcentajeirpf como Entero
    Definir sueldobase, complementodes, comcargoacademico, sueldobruto, retencion, sueldoneto como Real
	
    // Pedimos los datos
    Escribir"Ingrese el sueldo base: "
    Leer sueldobase
	
    Escribir"Ingrese el complemento de destino: "
    Leer complementodes
	
    Escribir "Ingrese el complemento de cargo acad�mico: "
    Leer comcargoacademico
	
    Escribir "Ingrese las horas extra realizadas: "
    Leer horasextra
	
    Escribir "Ingrese el n�mero de hijos: "
    Leer numhijos
	
    Escribir "Ingrese el n�mero de mayores dependientes: "
    Leer numayoresdep
	
    // Calculamos el sueldo bruto
    sueldobruto = sueldobase + complementodes + comcargoacademico + (23 * horasextra)
	
    // Calculamos el porcentaje de impuestos
    porcentajeirpf = 24 - (2 * numhijos) - numayoresdep
	
    // Calculamos los impuestos de retenci�n
    retencion = (sueldobruto * porcentajeirpf) / 100
	
    // Calculamos el sueldo neto
    sueldoneto = sueldobruto - retencion
	
    // Imprimimos los resultados
    Escribir"Sueldo base: ", sueldobase, " $"
    Escribir"Complemento de destino: ", complementodes, " $"
    Escribir"Complemento de cargo acad�mico: ", comcargoacademico, " $"
    Escribir"Horas extra realizadas: ", horasextra
    Escribir"Hijos: ", numhijos
    Escribir"Mayores: ", numayoresdep
    Escribir("C�lculo de la n�mina.")
    Escribir"Sueldo bruto: ", sueldobruto, " $"
    Escribir"Porcentaje IRPF: ", porcentajeirpf, "%"
    Escribir"Retenci�n por IRPF: ", retencion, " $"
    Escribir"Sueldo neto: ", sueldoneto, " $"
	
FinAlgoritmo
