bicicleta.exe: teste.o bicicleta.o
	g++ -o bicicleta.exe teste.o bicicleta.o

teste.o: teste.cpp
	g++ -c teste.cpp

bicicleta.o: bicicleta.cpp bicicleta.h
	g++ -c bicicleta.cpp

clear: 
	rm *.o