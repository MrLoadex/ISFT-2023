from functools import reduce


class Lambda:
    
    lista = [1, 6, 3, 8, 5]
    
    #6.1 Obtener el cuadrado de todos los elementos en la lista.
    def elevar_cuadrado(self):
        return list(map(lambda x: x**2, self.lista))

    #6.2 Obtengamos la cantidad de elementos mayores a 5 en una tupla.
    def filter_mayores_a_5(self):
        return list(filter(lambda x: x > 5, self.lista))

    #6.3 Obtengamos la cantidad de elementos mayores a 5 en una tupla, usando Reduce
    def count_mayores_a_5(self):
        return reduce(lambda count, x: count + 1 if x > 5 else count, self.lista, 0)
    
    
if __name__ == "__main__":
    numbers = Lambda
    print (numbers.elevar_cuadrado(numbers))
    print (numbers.filter_mayores_a_5(numbers))
    print (numbers.count_mayores_a_5(numbers))