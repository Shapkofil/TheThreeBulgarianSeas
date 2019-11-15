#include <iostream>

using namespace std;

BoardState execute(BoardState b,Piece p,int x1,int y1)
{
    if(!validate(b,p,x1,y1))
    {
        return NULL;
    }
    b.board[x1][y1] = p;
    b.board[x][y] = Piece();
    return b;
}
