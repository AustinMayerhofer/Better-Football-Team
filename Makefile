CC=g++
CPPFLAGS=-g -Wall -Werror -std=c++11
SRCS=lib/FileReader.cpp lib/Game.cpp lib/Team.cpp lib/TeamNode.cpp lib/TeamsGraph.cpp src/main.cpp src/NFLFileReader.cpp src/NFLGame.cpp src/NFLTeam.cpp
DEPS=lib/FileReader.h lib/Game.h lib/Team.h lib/TeamNode.h lib/TeamsGraph.h src/NFLFileReader.h src/NFLGame.h src/NFLTeam.h
OBJS=$(SRCS:.cpp=.o)
OUT=betterteam

$(OUT): $(OBJS)
	$(CC) $(CPPFLAGS) -o $@ $^

%.o: lib/%.cpp $(DEPS)
	$(CC) $(CPPFLAGS) -c $<

%.o: src/%.cpp $(DEPS)
	$(CC) $(CPPFLAGS) -c $<

clean:
	- rm $(OBJS) $(OUT)