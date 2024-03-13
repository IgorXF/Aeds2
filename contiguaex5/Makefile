listaContigua.exe: main.o Lista.o Livro.o
	g++ -o listaContigua.exe main.o Lista.o Livro.o

main.o: main.cpp
	g++ -c main.cpp

Lista.o: Lista.cpp Lista.h
	g++ -c Lista.cpp

Produto.o: Livro.cpp Livro.h
	g++ -c Livro.cpp

clean: 
	rm *.o
