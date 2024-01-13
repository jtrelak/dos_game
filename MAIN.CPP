#include "BRICK.H"
#include "PLAYER.H"
#include <iostream>

int main() {
	Bitmap bmp; // Assuming Bitmap is defined somewhere
	Brick brick(bmp, 100, 200);
	Player player(bmp, 50, 50);

	player.move(60, 60);

	std::cout << "Brick Position: (" << brick.getX() << ", " << brick.getY() << ")\n";
	std::cout << "Player Position: (" << player.getX() << ", " << player.getY() << ")\n";

	return 0;
}