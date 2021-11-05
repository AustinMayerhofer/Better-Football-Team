#include "TeamsGraph.h"

void TeamsGraph::addGame(Game g) {

}

void TeamsGraph::addNode(Team t) {
	TeamNode node(t);
	teams.insert({t.getTeamName(), t});
}

int TeamsGraph::getNumTeams() {
	return teams.size();
}