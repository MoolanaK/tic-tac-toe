#include <iostream>

using namespace std;

class Board 
{
    public:
        char board[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
        int turns = 0;

        void Draw()
        {
            for(int row = 0; row < 3; row++)
            {
                for(int col = 0; col < 3; col++)
                {
                    cout << board[row][col] << " ";

                }
                cout << endl;
            }
        }
        
        bool threeInRow()
        {

            for(int i = 0; i < 3; i++)
            {
                //check rows
                char symbol = board[i][0];
                if(symbol == board[i][1] && symbol == board[i][2])
                {
                    return true;
                }

                //check cols
                char symbol2 = board[0][i];
                if(symbol2 == board[1][i] && symbol2 == board[2][i])
                {
                    return true;
                }
            }

            //check diagonals
            if(board[0][0]==board[1][1] && board[1][1] == board[2][2])
            {
                return true;
            }

            if(board[0][2]==board[1][1] && board[1][1] == board[2][0])
            {
                return true;
            }

            return false;

        }

        bool isEnd()
        {
            if(turns == 9)
            {
                return true;
            }

            bool three = threeInRow();

            return three;
        }

        void Modify(int row, int col, char symbol)
        {
            board[row][col] = symbol;
            Draw();

        }
        
        void whoWon()
        {
            char user;
            if(!threeInRow())
            {
                cout << "Cat's Game!" << endl;
            }

            else
            {
                if(turns%2==0)
                {
                    user = 'O';
                }
                else
                {
                    user = 'X';
                }

                cout << "Player " << user << " has won the game, congrats!" << endl;
            }
        }


};