pythagora5: main.o
	g++ -g -Wall -std=c++20 main.o -o primer

main.o: main.cpp
	g++ -g -Wall -std=c++20 -c main.cpp

clean:
	rm *.o primer

run:
	./primer