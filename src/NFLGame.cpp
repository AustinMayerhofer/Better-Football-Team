#include "NFLGame.h"

NFLGame::NFLGame(Team winner, Team loser,
	int winnerScore, int loserScore,
	unsigned int week, std::string day,
	std::string dateString, std::string timeString,
	int winnerYards, int loserYards,
	int winnerTurnovers, int loserTurnovers) : Game(winner, loser, winnerScore, loserScore) {
	this->week = week;
	this->day = day;
	this->dateString = dateString;
	this->timeString = timeString;
	this->winnerYards = winnerYards;
	this->loserYards = loserYards;
	this->winnerTurnovers = winnerTurnovers;
	this->loserTurnovers = loserTurnovers;
}