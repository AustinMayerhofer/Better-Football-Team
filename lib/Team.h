#ifndef TEAM_H
#define TEAM_H

#include <string>

class Team {
public:
	Team();
	Team(std::string teamName);
	const std::string getTeamName();
private:
	std::string teamName;
};

#endif