DriverConto: DriverConto.o ContoCorrente.o
	g++ -Wall -o DriverConto ContoCorrente.o DriverConto.o

ContoCorrente.o: DriverConto.cpp ContoCorrente.hpp
	g++ -Wall -c ContoCorrente.cpp

DriverConto.o: DriverConto.cpp ContoCorrente.hpp
	g++ -Wall -c DriverConto.cpp