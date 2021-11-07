#ifndef GAME_H
#define GAME_H

#include "Team.h"

class Game {
public:
	Game(Team winner, Team loser, 
		int winnerScore, int loserScore);
	Team getWinner();
	Team getLoser();
	int getWinnerScore();
	int getLoserScore();
protected:
	Team winner;
	Team loser;
	int winnerScore;
	int loserScore;
};

#endif