#include <iostream>
#include "Input.cpp"

using namespace std;



int main()
{
    Board boardObj;
    Board *boardRef = &boardObj;
    boardObj.Draw();

    while (!boardObj.isEnd())
    {
        cout << endl;

        if(boardObj.turns%2 == 0)
        {Input('X', boardRef);}
        else
        {Input('O', boardRef);}

        boardObj.turns++;
    }

   boardObj.whoWon();
   
   return 0;
}