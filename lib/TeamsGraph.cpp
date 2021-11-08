#include "TeamsGraph.h"
#include <stdexcept>
#include <iostream>

void TeamsGraph::addGame(Game g) {

}

void TeamsGraph::addNode(Team t) {
	TeamNode node(t);
	teams.insert({t.getTeamName(), t});
}

int TeamsGraph::getNumTeams() {
	return teams.size();
}

Team TeamsGraph::getTeam(std::string teamName) {
	if (teams.count(teamName) != 0) {
		return teams[teamName].getTeam();
	}
	std::cerr << teamName << std::endl;
	throw std::invalid_argument("did not recognize teamName in TeamsGraph.getTeam()");
}