#include "NFLFileReader.h"
#include <iostream>

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

}

void NFLFileReader::readScoresFile(std::string scoresPath, TeamsGraph& g) {

}