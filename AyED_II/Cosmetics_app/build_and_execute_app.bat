:: Compilo código objeto
g++ -Wall -std=c++17 -I.\Include -c .\src\Customer.cpp
g++ -Wall -std=c++17 -I.\Include -c .\src\Item.cpp
g++ -Wall -std=c++17 -I.\Include -c .\src\Order.cpp
g++ -Wall -std=c++17 -I.\Include -c .\src\BuilderOrder.cpp

g++ -Wall -std=c++17 -I.\ -I.\Include\  -c .\bd.cpp


:: Compilo el Binario
g++ -I.\include Customer.o Item.o Order.o  BuilderOrder.o bd.o -o app.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto
app.exe
