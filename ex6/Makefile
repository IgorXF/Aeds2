filme.exe: teste.o filme.o
	g++ -o filme.exe teste.o filme.o

teste.o: teste.cpp
	g++ -c teste.cpp

filme.o: filme.cpp filme.h
	g++ -c filme.cpp

clear: 
	rm *.o