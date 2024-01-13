#ifndef PLAYER_H
#define PLAYER_H

#include "SINGLE.H"

class Player : public Single {
private:
	int x;
	int y;

public:
	Player(const Bitmap& bmp, int xPos, int yPos);
	void move(int newX, int newY);
	int getX() const;
	int getY() const;

#endif