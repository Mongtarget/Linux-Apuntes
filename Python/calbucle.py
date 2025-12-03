print("--- CALCULADORA INFINITA ---")

# Empezamos el bucle eterno
while True:
    print("\nOPCIONES:") # \n es un salto de línea para que se vea ordenado
    print("1. Sumar")
    print("2. Restar")
    print("3. Multiplicar")
    print("4. Dividir")
    print("5. SALIR DEL PROGRAMA") # Nueva opción vital

    try:
        opcion = int(input("Elige una opción (1-5): "))

        # PRIMERO: Comprobamos si quiere salir
        if opcion == 5:
            print("¡Nos vemos, Alexander! Cerrando sistema...")
            break  # <--- ESTO ROMPE EL BUCLE WHILE

        # Si no quiere salir, pedimos los números
        n1 = float(input("Primer número: "))
        n2 = float(input("Segundo número: "))

        if opcion == 1:
            print(f"Resultado: {n1 + n2}")
        elif opcion == 2:
            print(f"Resultado: {n1 - n2}")
        elif opcion == 3:
            print(f"Resultado: {n1 * n2}")
        elif opcion == 4:
            print(f"Resultado: {n1 / n2}")
        else:
            print("Opción no válida.")

    except ValueError:
        print("ERROR: Introduce solo números.")
    except ZeroDivisionError:
        print("ERROR: No puedes dividir por cero.")
    except Exception as e:
        print("Error desconocido:", e)

# Esta línea está FUERA del while (sin sangría), solo se ejecuta al hacer break
print("Fin de la ejecución.")
