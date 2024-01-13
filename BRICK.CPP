#include "BRICK.H"

Brick::Brick(const Bitmap& bmp, int xPos, int yPos) : Single(bmp), x(xPos), y(yPos) {
	// Constructor implementation
}

int Brick::getX() const {
	return x;
}

int Brick::getY() const {
	return y;
}