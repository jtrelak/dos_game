#ifndef SINGLE_H
#define SINGLE_H

#include "BITMAP.H" // Include Bitmap header if Bitmap is a custom class

class Single {
protected:
	Bitmap bitmap;

public:
	Single(const Bitmap& bmp);
};

#endif