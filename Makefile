CC = clang++
FLAGS = -Wall -g

main: main.o dom/dom.o
	$(CC) $(FLAGS) -o stingray main.o dom/dom.o
main.o: main.cpp dom/dom.h
	$(CC) $(FLAGS) -c main.cpp
dom.o: dom/dom.h

clean:
	@find . -type f -name '*.o' -exec rm {} +
	@rm stingray