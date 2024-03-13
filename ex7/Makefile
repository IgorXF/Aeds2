musica.exe: teste.o musica.o
	g++ -o musica.exe teste.o musica.o

teste.o: teste.cpp
	g++ -c teste.cpp

musica.o: musica.cpp musica.h
	g++ -c musica.cpp

clear: 
	rm *.o