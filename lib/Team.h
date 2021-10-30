#ifndef TEAM_H
#define TEAM_H

#include <string>

class Team {
public:
	const std::string getTeamName();
protected:
	std::string teamName;
};

#endif