# Better Football Team

### FileReader class
- classes will inherit from FileReader like NFLFileReader, NBAFileReader, etc.
- function for reading teams and scores file
- returns TeamsGraph object

### TeamsGraph class
- contains a map of team name to team node (makes every node accessible)
- AddNode() and AddGame() functions
- AddNode() will take a Team as input
- AddGame() will take a Game as input

### Team class
- classes will inherit from Team like NFLTeam, NBATeam, etc.
- every Team has a name
- classes that inherit from Team can define more fields like location,

### Game class
- classes will inherit from Game like NFLGame, NBAGame, etc.
- stores 2 Team objects (winner and loser) along with winning and losing score
- classes that inherit from Game can define more fields like date, time, etc.

### TeamsGraphTraverser class
- runs methods like dijkstra on a TeamsGraph object