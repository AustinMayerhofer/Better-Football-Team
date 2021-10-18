#ifndef NFLFileReader_H
#define NFLFileReader_H

#include <fstream>

class NFLFileReader {
private:
	std::string filePath;
public:
	NFLFileReader(std::string path);
	void parse();
};

#endif