#include "gencho.h"
#include "sotirules.h"
#include "klrules.h"
#include "castling.h"
#include "piece.h"
#include "boardstate.h"

using namespace std;

bool validate(BoardState b,Piece p,int x,int y)
{
	switch(p.type)
	{
		case 0:
			return EMPTYrules();
		case 1:
			return EMPTYrules();
		case 2:
			return EMPTYrules();
		case 3:
			return EMPTYrules();
		case 4:
			return EMPTYrules();
		case 5:
			return EMPTYrules();
		case 6:
			return EMPTYrules();
	}
}