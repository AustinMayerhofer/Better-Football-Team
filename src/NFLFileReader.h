#ifndef NFLFILEREADER_H
#define NFLFILEREADER_H

#include "../lib/FileReader.h"

class NFLFileReader : public FileReader {
public:
	NFLFileReader(int year);
private:
	int year;
	unsigned int numFieldsPerTeamsLine;
	unsigned int numFieldsPerScoresLine;
	void readTeamsFile(std::string teamsPath, TeamsGraph& g);
	void readScoresFile(std::string scoresPath, TeamsGraph& g);
};

#endif