Test1.exe: main1.o A.o
	g++ -o Test1.exe main1.o A.o

main1.o: main1.cpp A.hpp
	g++ -Wall -c -std=c++11 main1.cpp

Test2.exe: main2.o A.o
	g++ -o Test2.exe main2.o A.o

main2.o: main1.cpp A.hpp
	g++ -Wall -c -std=c++11 main2.cpp

A.o: A.cpp A.hpp
	g++ -Wall -c -std=c++11 A.cpp

clean:
	rm -f Test1.exe Test2.exe main1.o main2.o A.o