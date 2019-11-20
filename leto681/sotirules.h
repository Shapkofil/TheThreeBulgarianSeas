#include<iostream>
#include<cmath>
#include "boardstate.h"
using namespace std;

bool knightrules(BoardState b,Piece thisknight,int x,int y) {
    int x1 = thisknight.x;
    int y1 = thisknight.y;
    if ((abs(x1 - x)==2 && abs(y1 - y)==1 ||abs(x1-x)==1 && abs(y1-y)==2)) return true;
    return false;
}

bool rookrules(BoardState b,Piece thisrook,int x,int y) {
    int x1 = thisrook.x;
    int y1 = thisrook.y;
    if((x1 != x) || (y1 != y)) {
        for(int i = x1;i<x;i++) {
            if(i < 0 || i > 7) break;
            if(b.board[i][y].type != Piece::Type::EMPTY ) return false;
            return true;
        }
        for(int i = x1;i>x;i--){
            if(i < 0 || i > 7) break;
            if(b.board[i][y].type != Piece::Type::EMPTY ) return false;
            return true;
        }
        for(int j = y1;j<y;j++) {
            if(j < 0 || j > 7) break;
            if(b.board[x][j].type != Piece::Type::EMPTY) return false;
            return true;
        }
        for(int j = y1;j>y;j--) {
            if(j < 0 || j > 7) break;
            if(b.board[x][j].type != Piece::Type::EMPTY) return false;
            return true;
        }
    }
    else return false;
}
