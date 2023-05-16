:: Compilo código objeto
g++ -Wall -std=c++11 -I.\Include -c .\src\StreamingPlataforms.cpp
g++ -Wall -std=c++11 -I.\Include -c .\src\StreamingPlataforms\Netflix.cpp
g++ -Wall -std=c++11 -I.\Include -c .\src\StreamingPlataforms\Spotify.cpp
g++ -Wall -std=c++11 -I.\Include -c .\src\Library.cpp
g++ -Wall -std=c++11 -I.\Include -c .\src\Library\Soundtrack.cpp
g++ -Wall -std=c++11 -I.\Include -c .\src\Library\Film.cpp
g++ -Wall -std=c++11 -I.\Include -c .\bd.cpp

:: Compilo el Binario
g++ -I.\ StreamingPlataforms.o -I.\ Netflix.o -I.\ Spotify.o -I.\ Library.o -I.\ Soundtrack.o -I.\ Film.o -I.\ bd.o -o probando.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto
probando.exe
