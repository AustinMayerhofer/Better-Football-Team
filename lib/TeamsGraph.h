#ifndef TEAMSGRAPH_H
#define TEAMSGRAPH_H

#include "TeamNode.h"
#include <map>

class TeamsGraph {
public:
private:
	std::map<std::string, TeamNode> teams;
};

#endif