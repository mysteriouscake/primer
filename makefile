pythagora5: main.o
	g++ -g -Wall -O3 main.o -o primer

main.o: main.cpp
	g++ -g -Wall -O3 -c main.cpp

clean:
	rm *.o primer