#include <iostream>
#include "boardstate.h"
#include "piece.h"
#include "rules.h"
using namespace std;

BoardState execute(BoardState b,int x,int y,int x1,int y1)
{
	Piece p = b.board[x][y];
    if(!validate(b,p,x1,y1))
    {
        return NULL;
    }
    p.x = x1;
    p.y = y1;
    b.board[x1][y1] = p;
    b.board[x][y] = Piece();
    return b;
}
