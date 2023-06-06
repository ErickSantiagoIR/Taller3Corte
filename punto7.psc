Algoritmo CalculoNomina
    Definir horasextra, numhijos, numayoresdep, porcentajeirpf como Entero
    Definir sueldobase, complementodes, comcargoacademico, sueldobruto, retencion, sueldoneto como Real
	
    // Pedimos los datos
    Escribir"Ingrese el sueldo base: "
    Leer sueldobase
	
    Escribir"Ingrese el complemento de destino: "
    Leer complementodes
	
    Escribir "Ingrese el complemento de cargo académico: "
    Leer comcargoacademico
	
    Escribir "Ingrese las horas extra realizadas: "
    Leer horasextra
	
    Escribir "Ingrese el número de hijos: "
    Leer numhijos
	
    Escribir "Ingrese el número de mayores dependientes: "
    Leer numayoresdep
	
    // Calculamos el sueldo bruto
    sueldobruto = sueldobase + complementodes + comcargoacademico + (23 * horasextra)
	
    // Calculamos el porcentaje de impuestos
    porcentajeirpf = 24 - (2 * numhijos) - numayoresdep
	
    // Calculamos los impuestos de retención
    retencion = (sueldobruto * porcentajeirpf) / 100
	
    // Calculamos el sueldo neto
    sueldoneto = sueldobruto - retencion
	
    // Imprimimos los resultados
    Escribir"Sueldo base: ", sueldobase, " $"
    Escribir"Complemento de destino: ", complementodes, " $"
    Escribir"Complemento de cargo académico: ", comcargoacademico, " $"
    Escribir"Horas extra realizadas: ", horasextra
    Escribir"Hijos: ", numhijos
    Escribir"Mayores: ", numayoresdep
    Escribir("Cálculo de la nómina.")
    Escribir"Sueldo bruto: ", sueldobruto, " $"
    Escribir"Porcentaje IRPF: ", porcentajeirpf, "%"
    Escribir"Retención por IRPF: ", retencion, " $"
    Escribir"Sueldo neto: ", sueldoneto, " $"
	
FinAlgoritmo
