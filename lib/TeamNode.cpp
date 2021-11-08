#include "TeamNode.h"

TeamNode::TeamNode() {

}

TeamNode::TeamNode(Team& team) {
	this->team = team;
}

Team TeamNode::getTeam() {
	return this->team;
}