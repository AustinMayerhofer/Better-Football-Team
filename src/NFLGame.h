#ifndef NFLGAME_H
#define NFLGAME_H

#include "../lib/Game.h"

class NFLGame : public Game {
public:
	NFLGame(Team winner, Team loser,
		int winnerScore, int loserScore,
		unsigned int week, std::string day,
		std::string dateString, std::string timeString,
		int winnerYards, int loserYards,
		int winnerTurnovers, int loserTurnovers);
private:
	unsigned int week;
	std::string day;
	std::string dateString;
	std::string timeString;
	int winnerYards;
	int loserYards;
	int winnerTurnovers;
	int loserTurnovers;
};

#endif