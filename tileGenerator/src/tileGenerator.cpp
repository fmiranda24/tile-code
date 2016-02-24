//============================================================================
// Name        : tileGenerator.cpp
// Author      : Francisco Miranda
// Version     :
// Copyright   : All rights reserved
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "tile_functions.h"
#include "tile.h"
using namespace std;

int main() {

	int numerOfTilesRequiredForTheUS;

	numerOfTilesRequiredForTheUS = generateTiles(5.0, 8080464.3);

	cout << numerOfTilesRequiredForTheUS << endl;

	double coord[2] = {10.2, 20.4};

	tile testTile(10, coord);

	cout << "My first tile has ID" << testTile.returnId() << endl;

	double *coordRet;

	coordRet = &testTile.returnCoordinates();

	cout << "My first tile has Coordinates" << coordRet[0] << "  " << coordRet[1] << endl;

	return 0;
}
