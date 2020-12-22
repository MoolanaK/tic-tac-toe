#include <iostream>
#include "Board.cpp"

using namespace std;

void Input(char user, Board *boardObj);

void error(char user, Board *boardObj){
    cout << "Invalid Entry" << endl;
    Input(user, boardObj);
}

void Input(char user, Board *boardObj)
{
    int num;
    cout << "User " << user << " please enter the number where you'd like to place your symbol: " << endl;
    cin >> num;

    //error handling for incorrect types (non-int)
    while (!cin)
    {
        cout << "Invalid Entry" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> num;
    }

    switch (num)
    {
    case 1:
        
        if(boardObj->board[0][0] == '1')
        {boardObj->Modify(0, 0, user);}
        else
        {error(user, boardObj);}
        break;
    
    case 2:
        
        if(boardObj->board[0][1] == '2')
        {boardObj->Modify(0, 1, user);}
        else
        {error(user, boardObj);}
        break;

    case 3:
        
        if(boardObj->board[0][2] == '3')
        {boardObj->Modify(0, 2, user);}
        else
        {error(user, boardObj);}
        break;

    case 4:
        
        if(boardObj->board[1][0] == '4')
        {boardObj->Modify(1, 0, user);}
        else
        {error(user, boardObj);}
        break;

    case 5:
        
        if(boardObj->board[1][1] == '5')
        {boardObj->Modify(1, 1, user);}
        else
        {error(user, boardObj);}
        break;

    case 6:
        
        if(boardObj->board[1][2] == '6')
        {boardObj->Modify(1, 2, user);}
        else
        {error(user, boardObj);}
        break;

    case 7:
    
        if(boardObj->board[2][0] == '7')
        {boardObj->Modify(2, 0, user);}
        else
        {error(user, boardObj);}
        break;

    case 8:
        
        if(boardObj->board[2][1] == '8')
        {boardObj->Modify(2, 1, user);}
        else
        {error(user, boardObj);}
        break;

    case 9:

        if(boardObj->board[2][2] == '9')
        {boardObj->Modify(2, 2, user);}
        else
        {error(user, boardObj);}
        break;
    
    default:
        error(user, boardObj);
        break;
    }
}

