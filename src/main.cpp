#include "NFLFileReader.h"

int main() {
	NFLFileReader myfile("../data/NFL/Teams/Teams_2020.csv", "../data/NFL/Scores/Scores_2020.csv");
	myfile.parse();
	return 0;
}