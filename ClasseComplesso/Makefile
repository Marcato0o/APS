OPZIONI = -Wall -Wfatal-errors -03
DriverComplesso: DriverComplesso.o Complesso.o
	g++ -Wall -o DriverComplesso DriverComplesso.o Complesso.o

Complesso.o: Complesso.cpp Complesso.hpp
	g++ -Wall -c Complesso.cpp

DriverComplesso.o: DriverComplesso.cpp Complesso.hpp
	g++ -Wall -c DriverComplesso.cpp

clean:
	rm -f ClasseData.exe ClasseData.o DriverData.o