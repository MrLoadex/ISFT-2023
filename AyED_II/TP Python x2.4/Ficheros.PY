class Ficheros:
    #8.1 Crear un programa que abra un fichero en modo lectura y escritura, si no existe lo creará, y añadir la frase “Estoy aprendiendo Python”
    def abrir_fichero():
        nombre_archivo = 'aprendo_python.txt'
        try:
            archivo = open(nombre_archivo, 'r+')
        except FileNotFoundError:
            archivo = open(nombre_archivo, 'w+')
        archivo.write('Estoy aprendiendo Python')
        archivo.close()
    
    #8.2 Crear un programa que abra el fichero editado anteriormente y muestre el estado del fichero, el modo en el que fue abierto, el nombre y la codificación de caracteres del mismo.
    def mostrar_fichero():
        archivo = open('aprendo_python.txt', 'r+')
        print("Estado del archivo: ", archivo.read())
        print("Modo de apertura: ", archivo.mode)
        print("Nombre del archivo: ", archivo.name)
        print("Codificación de caracteres: ", archivo.encoding)
        archivo.close()

    #8.3 Realizar un programa que realice los ejercicios 1 y 2 utilizando la estructura with.
    def abro_con_with():
        frase = "Estoy aprendiendo Python"
        with open('aprendo_python.txt', 'w') as archivo:
            archivo.write(frase)
        print("Archivo creado y escrito exitosamente.")

        with open('aprendo_python.txt', 'r') as archivo:
            contenido = archivo.read()

        print("Contenido del archivo:", contenido)

if __name__ == "__main__":
    Ficheros.abrir_fichero()
    Ficheros.mostrar_fichero()
    Ficheros.abro_con_with()