#DE LA MANO DE CHATGPT
class Calculator:
    operacion = "Operación aritmética"  # Atributo de clase

    def __init__(self, num1, num2):
        self.num1 = num1  # Atributo de instancia
        self.num2 = num2  # Atributo de instancia

    def adittion(self):
        return self.num1 + self.num2

    def subtraction(self):
        return self.num1 - self.num2

    #
    @classmethod
    def multiplication(cls, num1, num2):
        return num1 * num2

    @staticmethod
    def division(num1, num2):
        if num2 != 0:
            return num1 / num2
        else:
            return "Error: división por cero"


# Crear un objeto de la clase Calculator
calculator = Calculator(10, 5)

# Acceder a los atributos de clase e instancia
print(Calculator.operacion)  # Operación aritmética
print(calculator.num1)  # 10
print(calculator.num2)  # 5

# Llamar a los métodos de instancia
print(calculator.adittion())  # 15
print(calculator.subtraction())  # 5

# Llamar al método de clase
print(Calculator.multiplication(8, 4))  # 32

# Llamar al método estático
print(Calculator.division(10, 2))  # 5.0
print(Calculator.division(10, 0))  # Error: división por cero
