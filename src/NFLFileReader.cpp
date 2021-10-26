#include "NFLFileReader.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

NFLFileReader::NFLFileReader() {

}

TeamsGraph NFLFileReader::getTeamsGraph(std::string teamsPath, std::string scoresPath) {
	std::cout << "I'm in the teams graph function!" << std::endl;
	TeamsGraph g;
	readTeamsFile(teamsPath, g);
	readScoresFile(scoresPath, g);
	return g;
}

void NFLFileReader::readTeamsFile(std::string teamsPath, TeamsGraph& g) {
	std::cout << "Now I'm here!" << std::endl;
	std::ifstream fstream(teamsPath);
	std::string line;

	// read lines
	while (std::getline(fstream, line)) {
		std::cout << line << std::endl;
		std::istringstream sstream(line);
		std::string field;
		std::vector<std::string> fields;
		while (std::getline(sstream, field, ',')) { fields.push_back(field); }

	}
}

void NFLFileReader::readScoresFile(std::string scoresPath, TeamsGraph& g) {

}