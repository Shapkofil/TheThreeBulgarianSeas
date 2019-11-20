#include<bits/stdc++.h>
using namespace std;

class Piece
{
	vector<char> charV {' ','p','r','n','b','q','k'};
public:
	enum Type{EMPTY,PAWN,ROOK,KNIGHT,BISHOP,QUEEN,KING};
	Type type;
	bool color = false;
	bool isMoved = false;
	int x,y;
	Piece(int x = 0,int y = 0,Type type = Type.EMPTY,bool color = false,bool isMoved = false)
	{
		this->x = x;
		this->y = y; 
		this->type = type;
		this->color = color;
		this->isMoved = isMoved;
	}
	char getChar()
	{
		char result = charV[int(type)];
		if(color)
			result -= 'a' + 'A';
		return result;
	}
};