:: Compilo c+odigo objeto
g++ -Wall -std=c++11 -I.\Include -c .\src\Student.cpp 
g++ -Wall -std=c++11 -I.\Include -c .\src\Course.cpp
g++ -Wall -std=c++11 -I.\Include -c .\src\AttendanceManagement.cpp
g++ -Wall -std=c++11 -I.\Include -c bd.cpp 

:: Compilo el Binario
g++ Student.o Course.o AttendanceManagement.o bd.o -o attendance_management.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto
attendance_management.exe