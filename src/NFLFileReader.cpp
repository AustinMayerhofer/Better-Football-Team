#include "NFLFileReader.h"
#include "NFLTeam.h"
#include "NFLGame.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <assert.h>

NFLFileReader::NFLFileReader(int year) : year(year) {
	if (year == 2020) {
		this->numFieldsPerTeamsLine = 1;
		this->numFieldsPerScoresLine = 14;
	}
	else {
		std::cerr << "NFLFileReader year not recognized, defaulting to 2020" << std::endl;
		this->numFieldsPerTeamsLine = 1;
		this->numFieldsPerScoresLine = 14;
	}
}

void NFLFileReader::readTeamsFile(std::string teamsPath, TeamsGraph& g) {
	std::ifstream fstream(teamsPath);
	std::string line;

	// read lines
	while (std::getline(fstream, line)) {
		std::istringstream sstream(line);
		std::string field;
		std::vector<std::string> fields;
		while (std::getline(sstream, field, ',')) { fields.push_back(field); }
		assert(fields.size() == this->numFieldsPerTeamsLine);
        if (fields.back().back() == ' ' || fields.back().back() == '\r' || fields.back().back() == '\n' || fields.back().back() == '\t') {
            fields.back().pop_back();
        }
        //std::cout << fields.at(fields.size() - 1).back() << std::endl;
        //fields.back().erase(fields.back().find_last_not_of(" \n\r\t")+1);
        //fields.back() = fields.back().substr(0, fields.back().find_last_not_of("\r")+1);
		NFLTeam team(fields[0]);
		g.addNode(team);
	}
}

void NFLFileReader::readScoresFile(std::string scoresPath, TeamsGraph& g) {
	std::ifstream fstream(scoresPath);
	std::string line;

	// skip first line
	std::getline(fstream, line);

	// read lines
	while (std::getline(fstream, line)) {
		std::istringstream sstream(line);
		std::string field;
		std::vector<std::string> fields;
		while (std::getline(sstream, field, ',')) { fields.push_back(field); }
		assert(fields.size() == this->numFieldsPerScoresLine);
        if (fields.back().back() == ' ' || fields.back().back() == '\r' || fields.back().back() == '\n' || fields.back().back() == '\t') {
            fields.back().pop_back();
        }

		g.getTeam(fields[4]);
	}

    std::cout << year << std::endl;
}