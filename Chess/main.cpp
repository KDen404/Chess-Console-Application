#include <iostream>
#include <cstdlib>
#include <chrono>

#include "board.h"


using namespace std;




int main()
{
    board chess_board;

    chess_board.initialize();
    chess_board.set_board();
    chess_board.get_board();
    

    return 0;
}
