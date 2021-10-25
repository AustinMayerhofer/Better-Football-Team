# https://www.softwaretestinghelp.com/cpp-makefile-tutorial/

CC = g++
CFLAGS = -g -Wall -Werror -std=c++11
OUT = betterteam

all: main.o NFLFileReader.o FileReader.o TeamsGraph.o
	$(CC) $(CFLAGS) -o $(OUT) main.o NFLFileReader.o FileReader.o TeamsGraph.o

main.o: src/main.cpp src/NFLFileReader.h
	$(CC) $(CFLAGS) -c src/main.cpp

NFLFileReader.o: src/NFLFileReader.h
	$(CC) $(CFLAGS) -c src/NFLFileReader.cpp

FileReader.o: lib/FileReader.h
	$(CC) $(CFLAGS) -c lib/FileReader.cpp

TeamsGraph.o: lib/TeamsGraph.h
	$(CC) $(CFLAGS) -c lib/TeamsGraph.cpp

clean:
	rm $(OUT) *.o