pythagora5: main.o
	g++ -g -Wall main.o -o primer -O3

main.o: main.cpp
	g++ -g -Wall -c main.cpp -O3

clean:
	rm *.o primer

run:
	./primer