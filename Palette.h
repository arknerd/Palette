#pragma once
#include <iostream>
using namespace std;
#include <string>
//color list - anything <= to black is a "primary" color, > black are "mixed" colors
// Red + Blue = Purple
// Red + Yellow = Orange
// Red + White = Pink
// Blue + Yellow = Green
// White + Black = Grey
// Anything other mixes Undefined

static enum Color{ Undefined, Red, Blue, Yellow, White, Black, Purple, Orange, Pink, Green, Grey};

class Palette
{
private: Color m_color;
		 bool m_isPrimary;
public:
	Palette();
	Palette(Color c);
	~Palette();
	Palette operator+(Color f);
};

