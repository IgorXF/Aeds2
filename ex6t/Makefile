motor.exe: teste.o motor.o
	g++ -o motor.exe teste.o motor.o

teste.o: teste.cpp 
	g++ -c teste.cpp

motor.o: motor.cpp motor.h
	g++ -c motor.cpp

clear:
	rm *.o