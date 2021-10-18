#ifndef NFLFileReader_H
#define NFLFileReader_H

#include <fstream>

class NFLFileReader {
private:
	std::string filePath;
	const size_t numFieldsPerScoresLine = 14;
public:
	NFLFileReader(std::string path);
	void parse();
};

#endif