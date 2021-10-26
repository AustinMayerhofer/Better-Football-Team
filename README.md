# Better Sports Team

### FileReader class
- classes will inherit from FileReader like NFLFileReader, NBAFileReader, etc.
- function for reading teams and scores file
- returns TeamsGraph object

### TeamsGraph class
- contains a map of team name to TeamNode (makes every node accessible)
- AddNode() and AddGame() functions
- AddNode() will take a Team as input and create a TeamNode
- AddGame() will take a Game as input and add to the TeamNode's "wins" vector
- to traverse from one node to another, use TeamNode->wins->LosingTeam->getTeamName() and search that string in the map of team name to Team Node

### TeamNode class
- can potentially be a nested class of TeamsGraph
- contains a Team object and vector of Game objects named "wins"

### Team class
- classes will inherit from Team like NFLTeam, NBATeam, etc.
- every Team has a name
- classes that inherit from Team can define more fields like location, etc.

### Game class
- classes will inherit from Game like NFLGame, NBAGame, etc.
- stores 2 Team objects (winner and loser) along with winning and losing score
- classes that inherit from Game can define more fields like date, time, etc.

### TeamsGraphTraverser class
- runs methods like dijkstra on a TeamsGraph object