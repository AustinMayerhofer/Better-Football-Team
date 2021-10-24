#include "FileReader.h"

FileReader::FileReader(std::ifstream scores, std::ifstream teams) {
	this->scores = scores;
	this->teams = teams;
}

FileReader::FileReader(std::string scoresPath, std::string teamsPath) {
	std::ifstream scoresStream(scores);
	std::ifstream teamsStream(teams);
	FileReader(scores, teams);
}