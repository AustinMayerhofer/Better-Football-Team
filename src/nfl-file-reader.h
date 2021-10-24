#ifndef NFLFileReader_H
#define NFLFileReader_H

#include <fstream>

class NFLFileReader {
public:
	NFLFileReader(std::string teamsPath, std::string scoresPath);
	void parse();
private:
	std::string teamsPath;
	std::string scoresPath;
	const size_t numFieldsPerScoresLine = 14;
	void parseTeams();
	void parseScores();
};

#endif