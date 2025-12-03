print("--- CALCULADORA A PRUEBA DE FALLOS ---")
print("1. Sumar | 2. Restar | 3. Multiplicar | 4. Dividir")

try:
    # 1. Intentamos pedir los datos
    opcion = int(input("Elige una opción (1-4): "))
    n1 = float(input("Introduce el primer número: "))
    n2 = float(input("Introduce el segundo número: "))

    # 2. Hacemos la lógica (solo si los datos fueron válidos)
    if opcion == 1:
        print("Suma:", n1 + n2)
    elif opcion == 2:
        print("Resta:", n1 - n2)
    elif opcion == 3:
        print("Multiplicación:", n1 * n2)
    elif opcion == 4:
        # Aquí podría haber error de división por cero
        print("División:", n1 / n2)
    else:
        print("Esa opción no existe.")

except ValueError:
    # Esto salta si escribes letras en vez de números
    print("Error: ¡Tienes que escribir NÚMEROS, no letras!")

except ZeroDivisionError:
    # Esto salta si divides por cero
    print("Error: Las matemáticas no permiten dividir por cero.")

except Exception as e:
    # Esto atrapa CUALQUIER otro error raro que no previmos
    print("Ocurrió un error desconocido:", e)
