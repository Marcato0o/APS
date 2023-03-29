OPTIONS = -Wall -Wfatal-errors -std=c++11

TestAsta: Asta.o Aggiudicazione.o Offerta.o Persona.o Oggetto.o Data.o Orario.o DriverAsta.o
	g++ -o TestAsta Asta.o Aggiudicazione.o Offerta.o Persona.o Oggetto.o Data.o Orario.o DriverAsta.o

Asta.o: Asta.cpp Asta.hpp Offerta.hpp Aggiudicazione.hpp Persona.hpp Oggetto.hpp Data.hpp Orario.hpp
	g++ -c $(OPTIONS) Asta.cpp

Offerta.o: Offerta.cpp Offerta.hpp Persona.hpp Oggetto.hpp Data.hpp Orario.hpp
	g++ -c $(OPTIONS) Offerta.cpp

Aggiudicazione.o: Aggiudicazione.cpp Aggiudicazione.hpp Persona.hpp Oggetto.hpp Data.hpp
	g++ -c $(OPTIONS) Aggiudicazione.cpp

Persona.o: Persona.cpp Persona.hpp Data.hpp
	g++ -c $(OPTIONS) Persona.cpp

Oggetto.o: Oggetto.cpp Oggetto.hpp
	g++ -c $(OPTIONS) Oggetto.cpp

Orario.o: Orario.cpp Orario.hpp
	g++ -c $(OPTIONS) Orario.cpp
 
Data.o: Data.cpp Data.hpp
	g++ -c $(OPTIONS) Data.cpp

DriverAsta.o: DriverAsta.cpp Asta.hpp Offerta.hpp Aggiudicazione.hpp Persona.hpp Oggetto.hpp Data.hpp Orario.hpp
	g++ -c $(OPTIONS) DriverAsta.cpp

clean:
	rm -f TestAsta Asta.o Offerta.o Aggiudicazione.o Persona.o Oggetto.o Orario.o Data.o DriverAsta.o