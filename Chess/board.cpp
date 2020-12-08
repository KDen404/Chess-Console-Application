#include "board.h"

board::board() {
	tiles a1;
	tiles a2;
	tiles a3;
	tiles a4;
	tiles a5;
	tiles a6;
	tiles a7;
	tiles a8;

	tiles b1;
	tiles b2;
	tiles b3;
	tiles b4;
	tiles b5;
	tiles b6;
	tiles b7;
	tiles b8;

	tiles c1;
	tiles c2;
	tiles c3;
	tiles c4;
	tiles c5;
	tiles c6;
	tiles c7;
	tiles c8;

	tiles d1;
	tiles d2;
	tiles d3;
	tiles d4;
	tiles d5;
	tiles d6;
	tiles d7;
	tiles d8;

	tiles e1;
	tiles e2;
	tiles e3;
	tiles e4;
	tiles e5;
	tiles e6;
	tiles e7;
	tiles e8;

	tiles f1;
	tiles f2;
	tiles f3;
	tiles f4;
	tiles f5;
	tiles f6;
	tiles f7;
	tiles f8;

	tiles g1;
	tiles g2;
	tiles g3;
	tiles g4;
	tiles g5;
	tiles g6;
	tiles g7;
	tiles g8;

	tiles h1;
	tiles h2;
	tiles h3;
	tiles h4;
	tiles h5;
	tiles h6;
	tiles h7;
	tiles h8;

	object_list_counter = 0;

	tiles object_list[8][8] = { {a8, b8, c8, d8, e8, f8, g8, h8 },
								{a7, b7, c7, d7, e7, f7, g7, h7},
								{a6, b6, c6, d6, e6, f6, g6, h6},
								{a5, b5, c5, d5, e5, f5, g5, h5},
								{a4, b4, c4, d4, e4, f4, g4, h4},
								{a3, b3, c3, d3, e3, f3, g3, h3},
								{a2, b2, c2, d2, e2, f2, g2, h2},
								{a1, b1, c1, d1, e1, f1, g1, h1} };

	real_x = -1;
	real_y = -1;

	board_buffer[47][23] = {};
}

board::~board() {}

void board::initialize() {
	bool used = 0;
	string id = "";
	char color = ' ';

	bool c = 1;

	for (unsigned int y = 0; y < 8; y++) {
		for (unsigned int x = 0; x < 8; x++) {
			if (c == 1) {
				color = 'w';
				c = 0;
			}
			else if (c == 0) {
				color = 'b';
				c = 1;
			}

			if (x == 7 && c == 0) { c = 1; }
			else if (x == 7 && c == 1) { c = 0; }

			object_list[x][y].initialize(used, id, color);
			object_list[x][y].set_tile();
		}
	}
}

void board::set_board() {
	int ox = -1;
	int oy = -1;

	for (int y = 0; y < 24; y++) {
		for (int x = 0; x < 48; x++) {
			if (x % 8 == 0) { ox++; }
			if (y % 8 == 0) { oy++; }
			board_buffer[x][y] = object_list[ox][oy].get_tile(x,y);

		}
	}
}

void board::get_board() {
	for (int y = 0; y < 24; y++) {
		for (int x = 0; x < 48; x++) {
			cout << board_buffer[x][y];
		}
		cout << endl;
	}
}

