/*
 * generate_tiles.cpp
 *
 *  Created on: Feb 18, 2016
 *      Author: francisco
 */
#include "tile_functions.h"
#include <cmath>

double calculateRegularHexagonArea(double d){

	return sqrt(3.0)/2.0 * pow(d,2);
}

int generateTiles(double radius, double totalArea){

	double area = calculateRegularHexagonArea(radius);

	int requiredHexagons = floor(totalArea/area);

	return requiredHexagons;

}
