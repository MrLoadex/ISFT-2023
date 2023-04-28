'''5.1 Escriba un programa que pida la anchura y altura de un rectángulo y el caracter a utilizar en el dibujo
5.2 Escriba un programa que pida un año y que escriba si es bisiesto o no.
Se recuerda que los años bisiestos son múltiplos de 4, pero los múltiplos de 100 no lo son, aunque los múltiplos de 400 sí. Estos son algunosejemplos de posibles respuestas: 2012 es bisiesto, 2010 no es bisiesto, 2000 es bisiesto, 1900 no es bisiesto
5.3 Escriba un programa que permita crear una lista de palabras (que puede ser vacía). Para ello, el programa tiene que pedir un número y luego
solicitar ese número de palabras para crear la lista. Por último, el programa tiene que escribir la lista.
'''

# Funcion de la mano de chatGPT
def draw_Rectangle(width, height):
    for i in range(height):
        for j in range(width):
            if i == 0 or i == height - 1:
                print("+", end="")
            elif j == 0 or j == width - 1:
                print("+", end="")
            else:
                print(" ", end="")
        print()

def is_Leap_Year(anno):
    if anno%4 == 0 and anno%100 != 0 or anno % 400 == 0:
            print(anno, ' es bisiesto')
    else: print(anno,' no es bisiesto bro')


def str_to_list(number_words):
    words_list = []
    for n in range (number_words):
        word = input('Ingrese la palabra ' + str(n+1) + ':')
        words_list.append(word)
    return words_list

def show_list(list):
    for e in list:
        print (e)


draw_Rectangle(5, 5)
is_Leap_Year(2024)
words_list = str_to_list(5)
show_list(words_list)