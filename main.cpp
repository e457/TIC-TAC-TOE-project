//C++ TIC-TAC-TOE 

//Header files included 
#include <iostream> 
using namespace std; 
//There isn't much std::cout in this project, so namespace was used

 
//variables and their data structures contained within a class


class game
{
	private:
			int grid[3][3];//3x3 grid   
			int player; 
      int playerNum; 
      int gridAvailable[9];
      int playerInput;

//functions list
public:
			game(); 
			void displayBoard();
      void displayGridNo();
			void retrieveLocation();
			void checkLocation();
			void displayEntry();
			int checkStatus();
};

//functions use defined later in the programme

game::game()  
{
	displayGridNo();
	displayBoard();
  retrieveLocation() ;
}

void game::displayGridNo()
{
  cout<<"\nWelcome to Tic-Tac-Toe...Players take turns making one mark in an empty spot on the playing grid with each play until one of them wins or a tie occurs."<<endl;
	cout<<"\nInstructions"<<endl;cout<<"Enter 1 for player 1 or 2 for player 2"<<endl;
  cout<<"Player 1 or Player 2 :"<<endl;
	cin>>playerNum;	
	
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

void game::displayBoard() // void function created to print the grid onto the console
{//hard-coded grid display 
	cout << "\t _________________" << endl;
	cout << "\t|     |     |     |" << endl;
	cout << "\t|  " << grid[0][0] << "  |  " <<grid[0][1]<< "  |  " << grid[0][2] <<"  |" << endl;

	cout << "\t|_____|_____|_____|" << endl;
	cout << "\t|     |     |     |" << endl;

	cout << "\t|  " << grid[1][0] << "  |  " <<grid[1][1]<< "  |  " << grid[1][2]<<"  |" << endl;

	cout << "\t|_____|_____|_____|" << endl;
	cout << "\t|     |     |     |" << endl;

	cout << "\t|  " <<grid[2][0] << "  |  " <<grid[2][1] << "  |  " <<grid[2][2] <<"  |" << endl;

	cout << "\t|_____|_____|_____|" << endl << endl;
}

void game::retrieveLocation(){ 

	cout<<"Player "<<playerNum<<" : ";
	cin>>playerInput;
	
	checkLocation();
}

void game::checkLocation()  
{
	if(playerInput<1||playerInput>9)
    {
		cout<<"\nEnter the correct value, please!"<<endl;
		retrieveLocation();
	}
	else 
	{	
    	if(gridAvailable[playerInput]!=0)
    	{
    		cout<<"\nincorrect grid position. Try again!"<<endl;
			retrieveLocation();
    	
		}
		else
		{
			gridAvailable[playerInput]=playerInput;
			if(playerNum==1)
   		    {
		 	   playerNum=2;
			   player=1;
			   displayEntry();
    		}
    		else
    		{
   	   		  playerNum=1;
			  player=2;
			  displayEntry();
    		}
		}
	}
}

void game ::displayEntry()
{
	 	
		switch(playerInput)
		 {
			
			case 1:
				grid[0][0]=player;
				break;
			case 2:
				grid[0][1]=player;
				break;
			case 3:
				grid[0][2]=player;
				break;
			case 4:
				grid[1][0]=player;
				break;
			case 5:
				grid[1][1]=player;
				break;
			case 6:
				grid[1][2]=player;
				break;
			case 7:
				grid[2][0]=player;
				break;
			case 8:
				grid[2][1]=player;
				break;
			case 9:
				grid[2][2]=player;
				break;			
		 }
     switch(checkStatus())
	{
	   case 0:  
		    	displayBoard();
		    	retrieveLocation();
		    	break;
		case 1:
		    displayBoard();
				cout<<"\nPlayer "<<player<<" wins!"<<endl;
				break;

		case 2: 
		    displayBoard();
				cout<<"\nDRAW!"<<endl;
				break;	
	}
}
int game::checkStatus()
{
	int Continue=0;
  int win=1;
  int draw=2;
		
			if (grid[0][0] == grid[0][1] && grid[0][0] == grid[0][2]&&grid[0][0]!=0)

		return win;
	else if (grid[1][0] == grid[1][1] && grid[1][0] == grid[1][2]&&grid[1][0]!=0)

	return win;
else	if (grid[2][0] == grid[2][1] && grid[2][0] == grid[2][2]&&grid[2][0]!=0)

		return win;
	else if (grid[0][0] ==grid[1][0] && grid[0][0] == grid[2][0]&&grid[0][0]!=0)

	return win;
else	if  (grid[0][1] ==grid[1][1] && grid[0][1] == grid[2][1]&&grid[0][1]!=0)

		return win;
	else if (grid[0][2] ==grid[1][2] && grid[0][2] == grid[2][2]&&grid[0][2]!=0)

	return win;
else	if (grid[0][0] == grid[1][1] && grid[0][0] == grid[2][2]&&grid[0][0]!=0)

		return win;
	else if (grid[0][2] ==grid[1][1] && grid[0][2] == grid[2][0]&&grid[0][2]!=0)

	return win;


		int check=0;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		if(grid[i][j]!=0)
		{
			check+=1;
		}
	  }
	}
	  if(check==9)
	  {
	  	return draw;
	  }
	else
	{

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		if(grid[i][j]==0)
		{
			return Continue;
		}
	   }
	 }
    }
}
int main() //execute the programme
{
	
	game game;

	return 0;

}


