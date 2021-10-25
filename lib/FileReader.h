#ifndef FILEREADER_H
#define FILEREADER_H

#include "TeamsGraph.h"
#include <string>

class FileReader {
public:
	virtual TeamsGraph getTeamsGraph(std::string teamsPath, std::string scoresPath) = 0;
protected:
	virtual void readTeamsFile(std::string teamsPath, TeamsGraph& g) = 0;
	virtual void readScoresFile(std::string scoresPath, TeamsGraph& g) = 0;
};

#endif