#include "Team.h"

Team::Team() : teamName("") {

}

Team::Team(std::string teamName) {
	this->teamName = teamName;
}

const std::string Team::getTeamName() {
	return this->teamName;
}