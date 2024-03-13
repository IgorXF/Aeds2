casa.exe: teste.o casa.o
	g++ -o casa.exe teste.o casa.o

teste.o: teste.cpp
	g++ -c teste.cpp

casa.o: casa.cpp casa.h
	g++ -c casa.cpp

clear: 
	rm *.o