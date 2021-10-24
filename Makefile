betterteam: src/main.cpp src/NFLFileReader.cpp
	g++ -o betterteam -Wall -Werror src/main.cpp src/NFLFileReader.cpp

clean:
	rm betterteam