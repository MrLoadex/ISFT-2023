'''Escriba un programa que pida dos números enteros y escriba qué números son pares y cuáles impares desde el primero hasta el segundo.
pide un número positivo al usuario una y otra vez hasta que el usuario lo haga correctamente
Escriba un programa que pida dos números enteros. El programa pedirá de nuevo el segundo número mientras no sea mayor que el primero. El programa terminará escribiendo los dos números.
Escriba un programa que pida dos números enteros y escriba la lista de números consecutivos que hay entre ellos, de menor a mayor.
'''
class Master:
    num1 = 0
    num2 = 0
    def enterNumbers(self):
        exit = False
        while not(exit):
            self.num1 = input ("Enter your frist integer number: ")
            if self.is_Integer(self.num1):  
                while not(exit):
                    self.num2 = input ("Enter your second integer number: ")
                    if self.is_Integer(self.num2):
                        exit = self.is_Major(self.num2,self.num1)
    
    def counter(self):
        numMax = int(self.num2)
        numMin = int(self.num1)
        for n in range (numMin,numMax + 1):
            print (n)
            
    def is_Odd(num):
        if num%2 == 0: 
            return False
        else: return True
    
    #Muestra los impares entre num1 y num2
    def odds_Counter(self):
            odd = self.is_Odd(int(self.num1))
            for n in range(int(self.num1),int(self.num2), 2):
                # Si el numero es inpar va a imprimir n
                #Lo hice de esta manera para no estar llamando siempre a la funcion is_Odd(n) y poder usar el for de 2 en 2 y ahorrar ciclos
                if odd:
                    print (n)
                #El else esta por que sino n+1 mostraria un numero fuera del rango.
                elif n < int(self.num2): print (n+1)
    
    #Muestra los pares entre num1 y num2
    def even_Counter(self):
            even = not(self.is_Odd(int(self.num1)))
            for n in range(int(self.num1), int(self.num2), 2):
                if even:
                    print (n)
                elif n <= int(self.num2): print (n+1) # Si n es mayor 
    
    
    def is_Integer(var):
        try:
            int(var)
            return True
        except ValueError:
            print("ERROR: You must enter an integer namber")
            return False
    
    
    def is_Major(numMax,numMin):
        if numMax > numMin :
            return True
        else:
            print ("ERROR: The second number must be the greatest")
            return False


contador = Master
contador.enterNumbers(contador)
print ("enteros entre el primer y segundo numero:")
contador.counter(contador)
print("pares:")
contador.even_Counter(contador)
print("inpares:")
contador.odds_Counter(contador)