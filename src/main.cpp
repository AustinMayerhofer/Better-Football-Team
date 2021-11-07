#include "NFLFileReader.h"
#include <iostream>

int main() {
	NFLFileReader nfl(2020);
	nfl.getTeamsGraph("data/NFL/Teams/Teams_2020.csv", "data/NFL/Scores/Scores_2020.csv");
	return 0;
}