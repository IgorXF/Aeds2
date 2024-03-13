animal.exe: teste.o animal.o
	g++ -o animal.exe teste.o animal.o

teste.o: teste.cpp
	g++ -c teste.cpp

animal.o: animal.cpp animal.h
	g++ -c animal.cpp

clear: 
	rm *.o