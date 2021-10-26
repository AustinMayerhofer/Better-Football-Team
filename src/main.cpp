#include "NFLFileReader.h"
#include <iostream>

int main() {
	NFLFileReader o;
	o.getTeamsGraph("data/NFL/Teams/Teams_2020.csv", "world");
	return 0;
}