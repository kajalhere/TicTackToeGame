#include<iostream>
using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int currentPlayer;
char currentMarker;

void drawboard()
{
    cout<<"\n";
    for(int i = 0; i<3; i++)
    {
        cout<<" "<<board[i][0]<<" | "<<board[i][1]<<" | "<<board[i][2]<<endl;
        if(i<2){
            cout<<"___________"<<endl;  
        }
        
    }
    cout<<"\n";
}

bool placemarker(int slot)
{
    int row = (slot-1)/3;//did get this 
    int col = (slot-1)%3;
    if(board[row][col]!='X' && board[row][col]!='O')
    {
        board[row][col] = currentMarker;
        return true;
    }
    return false;
}

void swapPlayerandMarker()
{
    if(currentMarker == 'X'){
        currentMarker = 'O';
    } else{ 
        currentMarker = 'X';
    }

    if(currentPlayer == 1){
        currentPlayer = 2;
    } else{
        currentPlayer =1;
    }

}

int winner()
{
    //Rows
    for(int i = 0; i<3; i++){
    if(board[i][0]==board[i][1] && board[i][1] == board[i][2])
    {
       return currentPlayer;
    }
    }
   //Coloums
    for(int i = 0; i<3; i++){
        if(board[0][i]==board[1][i] && board[1][i] == board[2][i])
        {
           return currentPlayer;
        }
        }
    //diagonals
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        return currentPlayer;
    }
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0]){
        return currentPlayer;
    }
   return 0;
}

void game()
{
    cout<< " Player1 choose your marker - X or O: ";
    char markerP1;
    cin>>markerP1;

    currentPlayer = 1;
    currentMarker = markerP1;

    int playerWon = 0;
    int moves = 0;

    while(moves<9 && playerWon == 0) 
    {
      drawboard();
      cout<<"Player "<< currentPlayer << "'s Turn . Enter a number(1-9): ";
      int slot;
      cin>> slot;

      if(slot >= 1 && slot<=9){
        if(placemarker(slot)){
            moves++;
            playerWon = winner();
            if(playerWon == 0){
                swapPlayerandMarker();
            }
        }
            else{
                cout<<"This position is already taken! Try again."<<endl;
            }
        
      }
      else{
        cout<<"Invalid Input! , Please Enter the no. between 1-9.\n";
      }

    }
    drawboard();

    if(playerWon==1){
        cout<<"Player-1 Won!!"<<endl;
    } else if(playerWon==2){
        cout<<"Player-2 Won!!"<<endl;
    } else{
        cout<<"It's a Tie!"<<endl;
    }


}

int main()
{
    game();
    return 0;
}