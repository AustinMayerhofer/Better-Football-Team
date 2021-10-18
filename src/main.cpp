#include <iostream>
#include "nfl-file-reader.h"

int main() {
	std::cout << "Hello World!" << std::endl;
	NFLFileReader myfile("../data/NFL/Scores/Scores_2020.csv");
	myfile.parse();
	return 0;
}