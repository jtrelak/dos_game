#include <dos.h>
#include <conio.h>

void setVideoMode() {
	union REGS regs;
	regs.h.ah = 0;		// Set video mode
	regs.h.al = 0x13;   // Mode 13h
	int86(0x10, &regs, &regs);
}

void drawPixel(int x, int y, unsigned char color) {
	char far* screen = (char far*)0xA0000000L; // VGA memory starts at A000:0000

	unsigned offset = y * 320 + x;

	screen[offset] = color;
}

int main() {
	setVideoMode(); // Set mode 13h

	// Display a white pixel at coordinates (160, 100)
	drawPixel(160, 100, 15); // 15 is the color code for white
	drawPixel(161, 101, 25); // 15 is the color code for white
	drawPixel(162, 102, 35); // 15 is the color code for white
	drawPixel(163, 103, 45); // 15 is the color code for white
	drawPixel(164, 104, 55); // 15 is the color code for white

	getch(); // wait for a key press before exiting

	return 0;
}
