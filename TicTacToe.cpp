#include <iostream> 

using namespace std; 

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

void Input(char user)
{
    int num;
    cout << "User " << user << " please enter the number where you'd like to place your symbol: ";
    cin >> num;

    switch (num)
    {
    case 1:
        /* code */
        if(board[0][0] == '1')
        {
            board[0][0] = user;
        }
        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;
    
    case 2:
        /* code */
        if(board[0][1] == '2')
        {
            board[0][1] = user;
        }
        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;

    case 3:
        /* code */
        if(board[0][2] == '3')
        {
            board[0][2] = user;
        }
        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;

    case 4:
        /* code */
        if(board[1][0] == '4')
        {
            board[1][0] = user;
        }
        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;

    case 5:
        /* code */
        if(board[1][1] == '5')
        {
            board[1][1] = user;
        }
        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;

    case 6:
        /* code */
        if(board[1][2] == '6')
        {
            board[1][2] = user;
        }
        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;

    case 7:
        /* code */
        if(board[2][0] == '7')
        {
            board[2][0] = user;
        }
        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;

    case 8:
        /* code */
        if(board[2][1] == '8')
        {
            board[2][1] = user;
        }
        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;

    case 9:
        /* code */
        if(board[2][2] == '9')
        {
            board[2][2] = user;
        }
        else
        {
            cout << "Invalid Entry" << endl;
            Input(user);
        }
        break;
    
    default:
        break;
    }

}

bool isEnd()
{
    if(turns == 9)
    {
        return true;
    }

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
        if(symbol == board[1][i] && symbol == board[2][i])
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

int main(){
    Draw();

    while(not isEnd())
    {
        cout << endl;
        if(turns%2 == 0)
        {
            Input('X');
            Draw();
            turns++;
        }
        else
        {
            Input('O');
            Draw();
            turns++;
        }
        
    }

    char user;

    if(turns == 9)
    {
        cout << "Cat's Game!";
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
    

    return 0;
}