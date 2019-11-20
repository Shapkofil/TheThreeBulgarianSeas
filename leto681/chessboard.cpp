#include <iostream>
#include <cctype>

#include "move.h"
#include "boardstate.h"
#include "piece.h"

using namespace std;

// system("clear"); - ubuntu, system("cls"); - windows
int x1, y1, x2, y2;

string desiredPiece, desiredPlace;



char board[8][8] =
    // 'k' - White King, 'q' - White Queen, 'p' - White Pawn, 'n' - White Knight, 'r'- White Rook, 'b' - White Bishop
    // 'K' - Black King, 'Q' - Black Queen, 'P' - Black Pawn, 'N' - Black Knight, 'R'- Black Rook, 'B' - Black Bishop
    // ' ' - Empty

    {
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
        {'P', 'P' ,'P', 'P', 'P', 'P', 'P', 'P'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
    };

bool check(string input) {
	if (input.size() > 2) return false;
	char a = input[0], b = input[1];
	if (!(a >= 'a' && a <= 'h' || a >= 'A' && a <= 'H')) return false;
	if (!(b >= '1' && b <= '8')) return false;
	return true;
}

void setDesiredPiece() {
	cout<<"Choose which piece to move: ";
	cin>>desiredPiece;
	if (!check(desiredPiece)) {
		cout<<"Wrong input\n";
		setDesiredPiece();
	}
}

void setDesiredPlace() {
	cout<<"Choose where to move the piece: ";
	cin>>desiredPlace;
	if (!check(desiredPlace)) {
		cout<<"Wrong input\n";
		setDesiredPlace();
	}
}

void setCoordinates(string input1, string input2) {
	x1 = tolower(input1[0]) - 97;
	y1 = 7 - (input1[1] - 49);
	x2 = tolower(input2[0]) - 97;
	y2 = 7 - (input2[1] - 49);
}

void draw() {
    for (int i = 0; i < 8; ++i) {
        cout<<"+-------------------------------+\n| ";
        for (int j = 0; j < 8; ++j) {
            cout<<board[i][j]<<" | ";
        }
        cout<<8 - i<<"\n";
    }
    cout<<"+-------------------------------+\n";
    cout<<"  A   B   C   D   E   F   G   H\n";
}

void turn(BoardState current)
{
    board = current.getChar();
    draw();
    setDesiredPiece();
    setDesiredPlace();
    setCoordinates(desiredPiece,desiredPlace);
    current = execute(current,x1,y1,x2,y2);
}

int main() {
    BoardState current = BoardState();
    while(true)
    {
        turn(current);
    }
    return 0;
}
