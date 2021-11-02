//C++ TIC-TAC-TOE 

//Header files included 
#include <iostream> 
using namespace std; 
//There isn't much std::cout in this project, so namespace was used

 
//variable and their data structures contained within a class


class game
{
	private:
			int grid[3][3];//3x3 grid   
			int player; 
      int player_num; 
      int gridAvailable[9];
      int playerInput;

//functions list
public:
			game(); 
			void displayBoard();
      void displayGridNo();
			void retrieveLocation();
			void checkLoaction();
			void displayEntry();
			int checkStatus();
};