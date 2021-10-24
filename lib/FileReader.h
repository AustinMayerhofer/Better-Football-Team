#ifndef FileReader_H
#define FileReadeR_H

#include "TeamsGraph.h"
#include <fstream>

class FileReader {
public:
	FileReader(std::ifstream scores, std::ifstream teams);
	FileReader(std::string scoresPath, std::string teamsPath);
	virtual TeamsGraph getTeamsGraph() = 0;
protected:
	std::ifstream scores;
	std::ifstream teams;
	virtual readScores(TeamsGraph& g) = 0;
	virtual readTeams(TeamsGraph& g) = 0;
};

#endif