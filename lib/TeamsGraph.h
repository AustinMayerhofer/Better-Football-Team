#ifndef TEAMSGRAPH_H
#define TEAMSGRAPH_H

#include "TeamNode.h"
#include <map>

class TeamsGraph {
public:
	void addGame(Game g);
	void addNode(Team t);
	int getNumTeams();
	Team getTeam(std::string teamName);
private:
	std::map<std::string, TeamNode> teams;
};

#endif