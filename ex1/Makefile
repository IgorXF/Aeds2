livro.exe: teste.o livro.o
	g++ -o livro.exe teste.o livro.o

teste.o: teste.cpp
	g++ -c teste.cpp

livro.o: livro.cpp livro.h
	g++ -c livro.cpp

clear: 
	rm *.o