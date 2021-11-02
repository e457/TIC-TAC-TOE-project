# Tic-Tac-Toe built in C++

### Game construct

The console displays the interface.

Using the flowchart diagram the tic-tac-toe project should start with a short descitpion of the game and then allow one player to take part first. Then the second player takes their turn. This would be created through setting conditions for the user to enter 1 or 2 (considered an int). Any other option such as 'one' or 'two' (considered as strings) would produce an invalid option. 

Afterwards, the 3X3 board would be seen in the console, each square has a number. This allows the player to keep track of each position to make their next move. 
 As C++ was used, cout displayed the grid to the console. Then the game would allow one player to take part first. Then the second player takes their turn. This was developed with a loop 
If there are 3 spaces on the grid (vertical, horizontal or diagonal) taken up by player 1 then the program would declare player 1 as the winner. However, if there is a tie, then there is no loser. Moreover, to keep track of a grid position conditions were crucial to include. This can be seen with the switch statement and if/else statements. For example, 



## Pre-Design Steps:
From the flowchart, a breakdown in C++ objects and data structures could be visualised. 

//As the flowchart is a local image, please find attached to the Google Drive.

Epics included :

- Menu e.g. how to play the game? Which player should go first?
- 3x3 grid
- Player 1 position
- Player 2 position
- Check if a location on the grid is valid or not


Before I submitted the Tic-Tac-Toe MVP, I worked locally on my text editor to problem solve and bug fix. This helped with the distrubtion of the 3X3 grid. As I wanted to make sure the grid had efficient alignment with the size and grid spaces in-between. Moreover, the cognitive load would of been reduced as more bugs could be tracked. 

Reflection on key design challenges, innovations and how they were solved (with examples).

##

One key pre-design challenge was declaring the winner in the game. The winner function should accept a board as input, and return the winner of the board if there is one. If player 1 won the game, the function should return this result. This was developed using switch case statements of each grid square possbility.  


Moreover, I became famailar with code smells and code refactoring. An example of code refactoring would be rewriting of objects from lines 15 instead of creating header files for each object, I preferred to visualise the class members in one file. As a result, I did not have to jump between different files for the objects instantiated by the classes code this produced efficiency. Furthermore, I had an initial step of stating the variables but instead thought that including a class with objects had a better approach with OOP. 

## OOP Principles 

- Encapsulation 

Due to the class members being declared as only being accessed by the functions within the class game (line 12 ), the first access specifier is private. This access specifier was introduced to demonstrate encapsulation. Furthermore, as opposed to having class members open and having to close it, class members are only available when needed.


## Reflective review

 The opportunity to improve development with this project would be to include an AI feature e.g. player vs computer. During the early testing stages, more bugs arose from this feature. In particular, a bug consitied of displaying the wrong 'winner' in the game. As a result, the project would be less credible to include this feature. 

