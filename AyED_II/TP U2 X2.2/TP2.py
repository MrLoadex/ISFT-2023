'''3.1 Mete los valores del 1 al 100 en una lista.
3.2 Crea una tupla con los meses del año, pide números al usuario, si el numero esta entre 1 y la longitud máxima de la tupla, muestra el contenido de esa posición sino muestra un mensaje de error.
3.3 Pide un numero por teclado y guarda en una lista su tabla de multiplicar hasta el 10. Por ejemplo, si pide el 5 la lista tendrá: 5,10,15,20,25,30,35,40,45,50
3.4 Crea un diccionario donde la clave sea el nombre del usuario y el valor sea el teléfono (no es necesario validar). Tendrás que ir pidiendo contactos hasta que el usuario diga que no quiere insertar más. No se podrán meter nombres repetidos.
'''

class Master:
    def MostrarNumeros():
        numero = 0
        lista_numeros = []
        for numero in range (1, 101):
            lista_numeros.append(numero)
        print (lista_numeros)
    
    def MostrarMes():
        meses_Anno = ('enero','febrero','marzo','abril','mayo','junio','julio','agosto','septiembre','octubre','noviembre','diciembre')
        mes = input("Por favor ingrese el mes que desee (en numero)")
        mes = int(mes)
        if type(mes) == int and mes > 0 and mes < 13:
            print(meses_Anno[mes-1])
        else: print ('ERROR: Debe ingresar un numero del 1 al 12')
    
    
    def Multiplicar():
        number = input("ingrese un numero: ")
        number = int(number)
        for num in range(1,11):
            print (number , "x" , num ,"=", number*num)
    
    def ManageUserAndNumber():
        UsersAndNumbers = {}
        exit = False
        while not(exit):
            user = input("Nombre de usuario: ")
            TelphoneNumber = input("Telefono: ")
            UsersAndNumbers[user] = TelphoneNumber
            exit = input("Desea agregar otro usuario? (y: yes n: no)")
            if exit == 'y': exit = False
            elif exit == 'n': exit = True
            else:
                print ('ERROR: debe completar con y/n')
                exit == True
        print(UsersAndNumbers)
        

Master.MostrarNumeros()
Master.MostrarMes()
Master.Multiplicar()
Master.ManageUserAndNumber()