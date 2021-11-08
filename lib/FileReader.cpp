#include "FileReader.h"

TeamsGraph FileReader::getTeamsGraph(std::string teamsPath, std::string scoresPath) {
	TeamsGraph g;
	readTeamsFile(teamsPath, g);
	readScoresFile(scoresPath, g);
	return g;
}