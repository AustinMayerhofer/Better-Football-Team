betterteam: src/main.cpp src/nfl-file-reader.cpp
	g++ -o betterteam -Wall -Werror src/main.cpp src/nfl-file-reader.cpp

clean:
	rm betterteam