//============================================================================
// Name        : tileGenerator.cpp
// Author      : Francisco Miranda
// Version     :
// Copyright   : All rights reserved
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "tile_functions.h"
using namespace std;

int main() {

	int numerOfTilesRequiredForTheUS;

	numerOfTilesRequiredForTheUS = generateTiles(5.0, 8080464.3);

	cout << numerOfTilesRequiredForTheUS << endl;

	return 0;
}
