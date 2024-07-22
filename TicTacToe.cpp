#include <iostream>
#include <cstdlib>  // library for srand function
#include <ctime>   // library for time(NULL)
using namespace std;

class TicTacToe  // class of TicTacToe
{
private:
  int board [15][15];  // array of board that has max size of 15x15
  int size;
  
public:
  TicTacToe (int a=0) : size (a) // size input from user
  {	int i=0;
    while  (i<size) // for loop to initialize the TicTacToe board
	{ int j=0;
      while ( j < size) 
	  { 
        board[i][j] = 0;
        j++;
      }
      i++;
    }
  } 
  
  void displayBoard (int size) // function to display grid along with cross and circles
  {
    for (int i = 0; i < size; ++i) 
	{  
      for (int j = 0; j < size; ++j) 
	  {
        if (board[i][j] == 0)  // if board is empty show empty space
		{
          cout << " ";
        } else if (board[i][j] == 1) // if player 1 sow X else O
		{
          cout << "X"; 
        } else {
          cout << "O";
        }
          cout << " | "; // for displaying the board
  }
    cout<<endl;
    for(int k=0;k<size;++k)
	{
  	cout<<"--+-"; // for displaying board
    }
    cout<<endl;    
  }
}

 bool makeMove(int player, int row, int col, int size)  // makeMove function 
 {
  if (row < 0 || row >= size || col < 0 || col >= size || board[row][col] != 0) // conditions for invalid move
  {
    return false;
  }
  board[row][col] = player; // assign player value in else condition X in case of 1 & O in case of 2
  return true;
}

bool checkWin(int player, int size) // checkWin function
{
  bool rowWin = true, colWin = true; // bool rowWin and colWin initialized to true

  // Check rows and columns
  for (int i = 0; i < size; ++i)  // two for loop for rows and columns
  {
    for (int j = 0; j < size; ++j) 
	{
      if (board[i][j] != player && board[j][i] != player ) // if board is not equal to player X and O rowWin and colWin becomes false
	  {
        rowWin = false;
        colWin = false;
        break; // Early exit if neither row nor column is a win
      }
    }
    if (rowWin || colWin) 
	{
      return true;
    }
  }

  // Check diagonals
  if (size == size)     // if board is a square matrix
  {
    bool leftDiagWin = true, rightDiagWin = true; // leftDiagWin and rightDiagWin initialized to true
    for (int i = 0; i < size; ++i) // for loop for negative gradient diagonal
	{
      if (board[i][i] != player) 
	  {
        leftDiagWin = false;
      }
      if (board[i][size - i - 1] != player) // for loop for positive gradient diagonal
	  {
        rightDiagWin = false;
      }
    }
    return leftDiagWin || rightDiagWin; // return true
  }

  return false;
}

    bool isDraw() // function to check for draw 
	{
        for (int i = 0; i < size; ++i) 
		{
            for (int j = 0; j < size; ++j) 
			{
                if (board[i][j] == 0)  // loop to check if all spaces are filled
				{
                    return false; 
                }
            }
        }
        return true;
    }
    
void playWithBot() // playwithBot function
{
    int botRow, botCol;
    // Seed random number generator once at the beginning
    srand(time(NULL));

    // Decide who starts randomly (0 for Player 1, 1 for Player 2)
    int startingPlayer = rand() % 2;
    int currentPlayer = startingPlayer + 1; // Start with the opposite player

    while (true) 
	{
        displayBoard(size);

        // Check for win or draw before each move
        if (checkWin(currentPlayer, size)) 
		{
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        } 
		else if (isDraw()) 
		{
            cout << "It's a draw!" << endl;
            break;
        }

        // Player move if it's their turn
        if (currentPlayer == 1) 
		{
            int row, col;
            do {
                cout << "Player " << currentPlayer << ", enter move (row, col): ";
                cin >> row >> col;
                row--; col--; // Adjust for 0-based indexing
                system("CLS"); // clear screen after each input
            } while (!makeMove(currentPlayer, row, col, size)); // till no valid move can be made
        } 
		else {
            do {
                    botRow = rand() % size; // random value assigned to botrow
                    botCol = rand() % size; // random value assigned to botCol
                    system("CLS");
                }while (!makeMove(currentPlayer, botRow, botCol, size));
        }

        // Switch turns for the next iteration
        currentPlayer = (currentPlayer % 2) + 1;
    }
}
};

int main() 
{ 
  int player = 1; // player initialized to 1
  int choice,opponent;
  cout<<"Choose your board type ( 9 or 15 ): ";
  cin>>choice;  					// choice input from user
  
  cout<<"Choose your opponent (1. Human 2. Dumb Bot): ";
  cin>>opponent;					// opponent input from user
  
  TicTacToe game (choice);          // instance of TicTacToe class
  		  
  		if (opponent==1)
  		{
  			while (true) 
			  {
    game.displayBoard(choice); // display baord according to size input
    int row, col;
    do {
      cout << "Player " << player << ", enter move (row, col): "; // do while for menu to show at least once
      cin >> row >> col;
      row--; col--;  // adjust for 0 based indexing
       
    } while (!game.makeMove(player, row, col,choice)); // till no valid move can be made
	
	if (game.checkWin(player,choice)) // menu to show if player won
	{
      cout << "Player " << player << " wins!" << endl;
      break;
    } 
	else if (game.isDraw()) // menu to show if game is a draw
	{
      cout << "It's a draw!" << endl;
      break;
    }
    
    player = (player == 1) ? 2 : 1; // player switched after each iteration
    system ("CLS");
		  }
	}
	if (opponent==2)
	{
		game.playWithBot();
	}
		  	
  return 0;
}
