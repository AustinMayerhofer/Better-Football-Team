#ifndef TEAM_H
#define TEAM_H

#include <string>

class Team {
private:
	std::string teamName;
public:
	Team(std::string teamName);
	std::string getTeamName();
};

#endif