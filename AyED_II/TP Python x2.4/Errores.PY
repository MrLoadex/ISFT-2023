class Errores:

    
    #7.1 Crear una Función que divia hasta cero, ej: dividir(27,0), verificar: ZeroDivisionError:
    def dividir(num1,num2):
        if num2 == 0:
            raise ZeroDivisionError("Error: no se puede dividir por cero")
        result = num1
        while result != 0:
            result = int(result/ num2)
            print (result)
    
    #7.2 llamar a la función mas_10() con cualquier número, además: add_10("cinco") verificar TypeError:
    def mas10(num):
        if not(isinstance(num, int)):
            raise TypeError("Debe ingresar un entero")
        num += 10
        print(num)

    #7.3 Crear una Lista e Iterar mas allá del limite del Index, verídica: IndexError:
    def recorrerLista():
        lista = [1,2,3,4,5,6,7,8,9]
        for i in range(0,10):
            if len(lista) <= i:
                raise IndexError("Te pasaste brocoli")
            print (lista[i])
    
    #7.3 Crear un Diccionario en Python y buscar una clave Inexistente, verificar keyError:
    def recorrer_diccionario(key):
        
        diccionario = {
            "uno":1,
            "dos":2,
            "tres":3,
            "cuatro":4
            }
        
        if not(key in diccionario):
            raise KeyError("la flashaste con la key broda")
        
        print(diccionario[key])


if __name__ == "__main__":
    Errores.dividir(40,0)
    #Errores.mas10("hola")
    #Errores.recorrerLista()
    #Errores.recorrer_diccionario("nueve")