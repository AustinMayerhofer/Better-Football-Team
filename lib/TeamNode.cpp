#include "TeamNode.h"

TeamNode::TeamNode(Team& team) {
	this->team = team;
}

Team TeamNode::getTeam() const {
	return this->team;
}