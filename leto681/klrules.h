#include <iostream>
#include <cmath>
#include "boardstate.h"
#include "piece.h"
using namespace std;
bool bishop(BoardState b,Piece thisbishop , int x , int y)
{
    int x1=thisbishop.x;
    int y1=thisbishop.y;
    if(x1!=x && y1!=y && abs(x1-x)==abs(y1-y))
    {
        for(int i=x1;i>x,i--)
        {
            if(i<0||i>7){break;}
            if(b.board[i][y+i].type!=Piece.Type.EMPTY)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        for(int j=y1;j>y;j--)
        {
            if(i<0||i>7){break;}
            if(b.board[x][y].type!=Piece.Type.EMPTY)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else
    {
        return false;
    }
}
bool king(BoardState b , Piece thisking , int x , int y)
{
    int x1=thisking.x;
    int y1=thisking.y;
    if(abs(x1-x)==1 && abs(y1-y)==1)
        for(int i=x1;i>x,i--)
        {
            if(i<0||i>7){break;}
            if(b.board[i][y].type!=Piece.Type.EMPTY)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        for(int j=y1;j>y;j--)
        {
            if(i<0||i>7){break;}
            if(b.board[x][y].type!=Piece.Type.EMPTY)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
}
