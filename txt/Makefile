main.exe: main.o ListaContigua.o ContadorTempo.o Cachorro.o
	g++ -o main.exe ListaContigua.o ContadorTempo.o Cachorro.o main.o

main.o: main.cpp
	g++ -c main.cpp

ListaContigua.o: ListaContigua.cpp ListaContigua.h
	g++ -c ListaContigua.cpp

ContadorTempo.o: ContadorTempo.cpp ContadorTempo.h
	g++ -c ContadorTempo.cpp

Cachorro.o: Cachorro.cpp Cachorro.h
	g++ -c Cachorro.cpp

clean:
	rm *.o