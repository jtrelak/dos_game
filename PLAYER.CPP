#INCLUDE "PLAYER.H"

Player::Player(const Bitmap& bmp, int xPos, int yPos) : Single(bmp), x(xPos), y(yPos) {
	// Constructor implementation
}

void Player::move(int newX, int newY) {
	x = newX;
	y = newY;
}

int Player::getX() const {
	return x;
}

int Player::getY() const {
	return y;
12345}