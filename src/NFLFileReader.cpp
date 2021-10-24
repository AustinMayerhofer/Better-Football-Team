#include "NFLFileReader.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <assert.h>

NFLFileReader::NFLFileReader(std::string teamsPath, std::string scoresPath) {
	this->teamsPath = teamsPath;
	this->scoresPath = scoresPath;
}

void NFLFileReader::parse() {
	parseTeams();
	parseScores();
}

void NFLFileReader::parseTeams() {
	std::ifstream fstream(this->teamsPath);
	std::string line;

	// read lines
	while (std::getline(fstream, line)) {
		std::istringstream sstream(line);
		std::string field;
		std::vector<std::string> fields;
		while (std::getline(sstream, field, ',')) { fields.push_back(field); }
		assert(fields.size() == this->numFieldsPerScoresLine);


	}
}

void NFLFileReader::parseScores() {
	std::ifstream fstream(this->teamsPath);
	std::string line;

	// skip first line
	std::getline(fstream, line);

	// read other lines
	while (std::getline(fstream, line)) {
		std::istringstream sstream(line);
		std::string field;
		std::vector<std::string> fields;
		while (std::getline(sstream, field, ',')) { fields.push_back(field); }
		assert(fields.size() == this->numFieldsPerScoresLine);


	}
}