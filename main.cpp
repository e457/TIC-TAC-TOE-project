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

game::game()  
{
	displayGridNo();
	displayBoard();
  retrieveLocation() ;
}

void game::displayGridNo()
{
  cout<<"\nWelcome to Tic-Tac-Toe...Players take turns making one mark in an empty spot on the playing grid with each play until one of them wins or a tie occurs."<<endl;
	cout<<"\nWhich Player are you"<<endl;
  cout<<"Player 1 or Player 2 :"<<endl;
	cin>>player_num;	
	
	for(int i=0;i<3;i++){
		for(int x=0;x<3;x++){
			
		grid[i][x]=0;
	
	  }
	}
	for(int i=0;i<9;i++)
	{
	   gridAvailable[i]=0;	
	}		
}
