#ifndef BRICK_H
#define BRICK_H

#include "SINGLE.H"

class Brick : public Single {
private:
	const int x;
	const int y;

public:
	Brick(const Bitmap& bmp, int xPos, int yPos);
	int getX() const;
	int getY() const;
};

#endif