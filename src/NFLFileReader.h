#ifndef NFLFILEREADER_H
#define NFLFILEREADER_H

#include "../lib/FileReader.h"

class NFLFileReader : public FileReader {
public:
	TeamsGraph getTeamsGraph(std::string teamsPath, std::string scoresPath);
private:
	const unsigned int numFieldsPerTeamsLine = 1;
	void readTeamsFile(std::string teamsPath, TeamsGraph& g);
	void readScoresFile(std::string scoresPath, TeamsGraph& g);
};

#endif