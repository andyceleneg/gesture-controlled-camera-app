main: main.o classification.o inputoutput.o datacapture.o
	g++ -Wall -pedantic -o main main.o classification.o inputoutput.o datacapture.o

main.o: main.cpp classification.h inputoutput.h datacapture.h
	g++ -Wall -pedantic -std=c++11 -c main.cpp

classification.o: classification.cpp classification.h
	g++ -Wall -pedantic -std=c++11 -c classification.cpp

inputout.o: inputoutput.cpp inputoutput.h
	g++ -Wall -pedantic -std=c++11 -c inputoutput.cpp

datacapture.o: datacapture.cpp datacapture.h
	g++ -Wall -pedantic -std=c++11 -c datacapture.cpp

clean:
	rm -f main main.o classification.o inputoutput.o datacapture.o
