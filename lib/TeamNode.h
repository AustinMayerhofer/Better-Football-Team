#ifndef TEAMNODE_H
#define TEAMNODE_H

#include "Team.h"
#include "Game.h"
#include <vector>

class TeamNode {
public:
	TeamNode();
	TeamNode(Team& team);
	Team getTeam();
private:
	Team team;
	std::vector<Game> wins;
};

#endif