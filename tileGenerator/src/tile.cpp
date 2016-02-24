/*
 * tile.cpp
 *
 *  Created on: Feb 24, 2016
 *      Author: francisco
 */

#include "tile.h"
#include <cmath>

double tile::area(double d){

	return sqrt(3.0)/2.0 * pow(d,2);

}

double* tile::returnCoordinates(){

	return coordinates;
}

int tile::returnId(){

	return id;
}

tile::tile(int ID, double COORDINATES[2]) {
	id = ID;
	coordinates[2] = COORDINATES[2];

}

tile::~tile() {
	// TODO Auto-generated destructor stub
}

