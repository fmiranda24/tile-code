/*
 * tile.h
 *
 *  Created on: Feb 24, 2016
 *      Author: francisco
 */

#ifndef TILE_H_
#define TILE_H_


class tile {
private:
	double coordinates[2];
	int id;
public:
	tile(int ID, double COORDINATES[2]);
	virtual ~tile();
	double area(double d);
	double* returnCoordinates();
	int returnId();
};

#endif /* TILE_H_ */
