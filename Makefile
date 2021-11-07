# https://www.softwaretestinghelp.com/cpp-makefile-tutorial/

CC = g++
CFLAGS = -g -Wall -Werror -std=c++11
OUT = betterteam

all: main.o FileReader.o Game.o Team.o TeamNode.o TeamsGraph.o NFLFileReader.o NFLGame.o NFLTeam.o
	$(CC) $(CFLAGS) -o $(OUT) main.o FileReader.o Game.o Team.o TeamNode.o TeamsGraph.o NFLFileReader.o NFLGame.o NFLTeam.o

main.o: src/main.cpp src/NFLFileReader.h
	$(CC) $(CFLAGS) -c src/main.cpp

FileReader.o: lib/FileReader.h
	$(CC) $(CFLAGS) -c lib/FileReader.cpp

Game.o: lib/Game.h
	$(CC) $(CFLAGS) -c lib/Game.cpp

Team.o: lib/Team.h
	$(CC) $(CFLAGS) -c lib/Team.cpp

TeamNode.o: lib/TeamNode.h
	$(CC) $(CFLAGS) -c lib/TeamNode.cpp

TeamsGraph.o: lib/TeamsGraph.h
	$(CC) $(CFLAGS) -c lib/TeamsGraph.cpp

NFLFileReader.o: src/NFLFileReader.h
	$(CC) $(CFLAGS) -c src/NFLFileReader.cpp

NFLGame.o: src/NFLGame.h
	$(CC) $(CFLAGS) -c src/NFLGame.cpp

NFLTeam.o: src/NFLTeam.h
	$(CC) $(CFLAGS) -c src/NFLTeam.cpp

clean:
	rm $(OUT) *.o