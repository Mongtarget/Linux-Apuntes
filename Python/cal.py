
# Calculadora de Suma Simple

print("--- CALCULADORA DE SUMA ---")

# Opción 1: Convertir en dos pasos (Más claro para empezar)
texto_numero1 = input("Introduce el primer número: ")
numero1 = int(texto_numero1)

# Opción 2: Convertir en una sola línea (Más profesional)
numero2 = int(input("Introduce el segundo número: "))

# Ahora sí podemos sumar matemáticamente
resultado = numero1 + numero2

# Para imprimir, tenemos que volver a convertir el número a texto con str()
# O usar comas en el print (Python pone un espacio automático)
print("El resultado de la suma es:", resultado)

