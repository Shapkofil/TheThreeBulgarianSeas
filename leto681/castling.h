using namespace std;
#include "piece.h"
#include "boardstate.h"

bool shortCastling(Boardstate b, Piece KING, Piece ROOK, int x, int y){
    Piece ROOK = b.board[x][y];
    Piece KING = b.board[x][y];
    bool condition = color == true ? b.board[6][7] == Piece.Type.EMPTY && b.board[5][7] == Piece.Type.EMPTY : b.board[6][0] == Piece.Type.EMPTY && b.board[5][0] == Piece.Type.EMPTY;
    if (!ROOK.isMoved && !KING.isMoved && condition)    return true;
    return false;
}

bool longCastling(Boardstate b, Piece KING, Piece ROOK, int x, int y){
    Piece ROOK = b.board[x][y];
    Piece KING = b.board[x][y];
    bool condition = color == true ? b.board[1][7].Type == Piece.Type.EMPTY && b.board[2][7] == Piece.Type.EMPTY && b.board[3][7] == Piece.Type.EMPTY : b.board[1][0] == Piece.Type.EMPTY && b.board[2][0] == Piece.Type.EMPTY && b.board[3][0] == Piece.Type.EMPTY;
    if (!ROOK.isMoved && !KING.isMoved && condition)    return true;
    return false;
}
