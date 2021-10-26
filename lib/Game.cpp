#include "Game.h"

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