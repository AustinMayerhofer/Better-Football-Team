#include "nfl-file-reader.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <assert.h>

NFLFileReader::NFLFileReader(std::string path) {
	this->filePath = path;
}

void NFLFileReader::parse() {
	std::ifstream fstream(this->filePath);
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