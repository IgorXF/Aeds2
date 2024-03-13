listaContigua.exe: main.o ListaContigua.o Produto.o
	g++ -o listaContigua.exe main.o ListaContigua.o Produto.o

main.o: main.cpp
	g++ -c main.cpp

ListaContigua.o: ListaContigua.cpp ListaContigua.h
	g++ -c ListaContigua.cpp

Produto.o: Produto.cpp Produto.h
	g++ -c Produto.cpp

clean: 
	rm *.o
