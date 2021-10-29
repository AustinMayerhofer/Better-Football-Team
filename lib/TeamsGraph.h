#ifndef TEAMSGRAPH_H
#define TEAMSGRAPH_H

#include "TeamNode.h"
#include <map>

class TeamsGraph {
public:
	void addNode(Team t);
	int getNumTeams();
private:
	std::map<std::string, TeamNode> teams;
};

#endif