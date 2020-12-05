#include "tiles.h"
#define WHITE_TILE char(178)
#define BLACK_TILE char(178)




tiles::tiles() {
	used = false;
	tile_id = "";
	tile_color_specifier = ' ';
	tile_color = ' ';
	tile[6][3];

	player = 0;
	figure = ' ';
}

tiles::~tiles(){}

void tiles::initialize(bool u, string i, char c) {
	used = u;
	tile_id = i;
	tile_color_specifier = c;
}

void tiles::set_tile() {
	switch (tile_color_specifier) {
		case 'b':
			tile_color = 'b';
			break;
		case 'w':
			tile_color = 'w';
			break;
	}

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 6; x++) {
			tile[x][y] = tile_color;

			if (used && y == 1 && x == 3){
				if (figure == 'P'){ tile[x][y] = figure; }
				else if (figure == 'N') { tile[x][y] = figure; }
				else if (figure == 'B') { tile[x][y] = figure; }
				else if (figure == 'R') { tile[x][y] = figure; }
				else if (figure == 'Q') { tile[x][y] = figure; }
				else if (figure == 'K') { tile[x][y] = figure; }
			}
		}
	}


}

char tiles::get_tile(unsigned int &x,  unsigned int &y) {
	return tile[x][y];
}

