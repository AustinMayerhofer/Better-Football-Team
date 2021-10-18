#include "nfl-file-reader.h"
#include <iostream>

NFLFileReader::NFLFileReader(std::string path) {
	this->filePath = path;
}

void NFLFileReader::parse() {
	std::ifstream stream(this->filePath);
	std::string line;

	while (std::getline(stream, line)) {
		std::cout << line << std::endl;
	}
}