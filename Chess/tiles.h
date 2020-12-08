                           #pragma once
#include <iostream>
using namespace std;

class tiles {
public:
	tiles();
	~tiles();

	void initialize(bool, string, char);

	void set_tile();
	char get_tile(int, int);


private:
	bool used;

	bool player;
	char figure;
	char figure_model;
	
	char tile_color_specifier;
	char tile_color;

	string tile_id;
	char tile[6][3];
};                                                                                                                                                                                                                                                                                                                                                    