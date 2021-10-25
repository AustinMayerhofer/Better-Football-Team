#include "NFLFileReader.h"
#include <iostream>

int main() {
	std::cout << "Hello World" << std::endl;
	NFLFileReader o;
	o.getTeamsGraph("hello", "world");
	return 0;
}