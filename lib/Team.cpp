#include "Team.h"

Team::Team(std::string teamName) {
	this->teamName = teamName;
}

std::string Team::getTeamName() {
	return this->teamName;
}