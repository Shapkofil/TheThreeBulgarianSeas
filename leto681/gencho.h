#include <iostream>
#include "piece.h"
#include "boardstate.h"
#include "sotirules.h"
#include "klrules.h"
using namespace std;

bool EMPTYRules (BoardState b,Piece p ,int x,int y) {
    return false;
}

bool PAWNRules (BoardState b,Piece p , int x ,int y) {
    int x1 = p.x,y1=p.y;

    if((x1-x) == 0 && (y1-y) == 1) return true;
    if((x1-x) == 0 && !(p.isMoved) && y1-y <= 2) {
        if(b.board[x1][y1].type !=Piece::Type::EMPTY) return false;
        return true;
    }
    if((x1-x) == 1 && (y1-y) == 1) {
        if(b.board[x][y].type != Piece::Type::EMPTY && b.board[x][y].color == p.color) return true;
    }
    if((x1-x) == -1 && (y1-y) == 1) {
        if(b.board[x][y].type != Piece::Type::EMPTY && b.board[x][y].color == p.color) return true;
    }
    if(b.board[x1][y1].type != Piece::Type::EMPTY) return false;
    /* nikva ideq kvo pravi tova
    if(y1 == 7 || y1 == 0) {
        int h;
        cin>>h;
        b.board[x][y] = Piece(x,y,h,p.color);
    }
    */
}
bool QUEENRules (BoardState b,Piece p ,int x , int y) {
    return rookrules(p,x,y) || bishop(p,x,y); // no matching function to call to 'rookrules' + 'bishop'
}
