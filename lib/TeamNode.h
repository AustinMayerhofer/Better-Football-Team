#ifndef TEAMNODE_H
#define TEAMNODE_H

#include "Team.h"
#include "Game.h"
#include <vector>

class TeamNode {
public:
	TeamNode(Team& team);
	Team getTeam() const;
private:
	Team team;
	std::vector<Game> wins;
};

#endif