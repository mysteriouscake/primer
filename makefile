pythagora5: main.o
	g++ -g -Wall -std=c++20 main.o -o pythagora5

main.o: main.cpp
	g++ -g -Wall -std=c++20 -c main.cpp

clean:
	rm *.o pythagora5

run:
	./pythagora5