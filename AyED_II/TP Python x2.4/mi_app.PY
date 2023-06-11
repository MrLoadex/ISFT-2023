from Lambda import Lambda
from Ficheros import Ficheros
from Errores import Errores

def __main__():
    #LAMBDA
    numbers = Lambda
    print (numbers.elevar_cuadrado(numbers))
    print (numbers.filter_mayores_a_5(numbers))
    print (numbers.count_mayores_a_5(numbers))

    #ERRORES
    #Errores.dividir(40,0)
    #Errores.mas10("hola")
    #Errores.recorrerLista()
    #Errores.recorrer_diccionario("nueve")

    #ARCHIVOS
    Ficheros.abrir_fichero()
    Ficheros.mostrar_fichero()
    Ficheros.abro_con_with()
    

__main__()