#include "Game.h"

Game::Game(Team winner, Team loser, 
	int winnerScore, int loserScore) {
	this->winner = winner;
	this->loser = loser;
	this->winnerScore = winnerScore;
	this->loserScore = loserScore;
}

Team Game::getWinner() {
	return this->winner;
}

Team Game::getLoser() {
	return this->loser;
}

int Game::getWinnerScore() {
	return this->winnerScore;
}

int Game::getLoserScore() {
	return this->loserScore;
}