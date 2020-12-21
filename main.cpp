#include <iostream>
#include "Board.cpp"

using namespace std;

Board boardObj;

void Input(char user)
{
    int num;
    cout << "User " << user << " please enter the number where you'd like to place your symbol: ";
    cin >> num;


    switch (num)
    {
    case 1:
        /* code */
        if(boardObj.board[0][0] == '1')
        {boardObj.Modify(0, 0, user);}

        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;
    
    case 2:
        /* code */
        if(boardObj.board[0][1] == '2')
        {boardObj.Modify(0, 1, user);}

        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;

    case 3:
        /* code */
        if(boardObj.board[0][2] == '3')
        {boardObj.Modify(0, 2, user);}

        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;

    case 4:
        /* code */
        if(boardObj.board[1][0] == '4')
        {boardObj.Modify(1, 0, user);}

        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;

    case 5:
        /* code */
        if(boardObj.board[1][1] == '5')
        {boardObj.Modify(1, 1, user);}

        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;

    case 6:
        /* code */
        if(boardObj.board[1][2] == '6')
        {boardObj.Modify(1, 2, user);}

        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;

    case 7:
        /* code */
        if(boardObj.board[2][0] == '7')
        {boardObj.Modify(2, 0, user);}

        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;

    case 8:
        /* code */
        if(boardObj.board[2][1] == '8')
        {boardObj.Modify(2, 1, user);}

        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;

    case 9:
        /* code */
        if(boardObj.board[2][2] == '9')
        {boardObj.Modify(2, 2, user);}

        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;
    
    default:
        cout << "Invalid Entry" << endl;
        Input(user);
        break;
    }
}

int main()
{
    boardObj.Draw();

    while (!boardObj.isEnd())
    {
        cout << endl;

        if(boardObj.turns%2 == 0)
        {Input('X');}
        else
        {Input('O');}

        boardObj.turns++;
    }
    
    char user;

    if(!boardObj.threeInRow())
    {
        cout << "Cat's Game!" << endl;
    }

    else
    {
        if(boardObj.turns%2==0)
        {
            user = 'O';
        }
        else
        {
            user = 'X';
        }

        cout << "Player " << user << " has won the game, congrats!" << endl;
    }
    

    return 0;


}