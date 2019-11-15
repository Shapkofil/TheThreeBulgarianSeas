#include<iostream>
#include "piece.h"
class BoardsState{
    public:
        Piece board[8][8];
        bool turn = 1; //0 = black/ 1 = white
        int cTurn = 1;
        turn = Turn%2;
        //start positions
        BoardState()
        {
            for(int i=0; i<8; i++)
            {
                for(int j=0; j<8; j++)
                {
                    board[i][j]=Piece();
                }
            }
            //black side
            board[0][0] = Piece(0,0,Type.ROOK, 0);
            board[0][1] = Piece(0,1,Type.KNIGHT, 0);
            board[0][2] = Piece(0,2,Type.BISHOP, 0);
            board[0][3] = Piece(0,3,Type.QUEEN, 0);
            board[0][4] = Piece(0,4,Type.KING, 0);
            board[0][5] = Piece(0,5,Type.BISHOP, 0);
            board[0][6] = Piece(0,6,Type.KNIGHT, 0);
            board[0][7] = Piece(0,7,Type.ROOK, 0);
            for(int i=0; i<8;i++)
            {
                board[1][i] = Piece(0,i,Type.PAWN,0);
            }
            //white side
            for(int i=0; i<8;i++)
            {
                board[6][i] = Piece(6,i,Type.PAWN,1);
            }
            board[7][0] = Piece(7,0,Type.ROOK, 1);
            board[7][1] = Piece(7,1,Type.KNIGHT, 1);
            board[7][2] = Piece(7,2,Type.BISHOP, 1);
            board[7][3] = Piece(7,3,Type.QUEEN, 1);
            board[7][4] = Piece(7,4,Type.KING, 1);
            board[7][5] = Piece(7,5,Type.BISHOP, 1);
            board[7][6] = Piece(7,6,Type.KNIGHT, 1);
            board[7][7] = Piece(7,7,Type.ROOK, 1);
        }
        char[][] getChars()
        {
            char[8][8] result;
            for(int i=0; i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    result[i][j]=board[i][j].getChar();
                }
            }
            return result;
        }

};
