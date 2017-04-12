#include "Palette.h"
#include <sstream>

Palette::Palette(Color c) :m_color(c),
m_isPrimary(c>Black ? false : true){}
Palette::Palette(): m_color(Undefined), m_isPrimary(false){}
Palette::~Palette(){}

Palette Palette::operator+(Palette input)
{
	Color c1 = m_color, c2 = input.m_color,c3;
	
	if (c1 == Red && c2 == Blue)
	{
		c3 = Purple;
		return c3;
	}
	else if (c1 == Red&&c2 == Yellow)
	{
		c3 = Orange;
		return  c3;
	}
	else if (c1 == Red && c2 == White)
	{
		c3 = Pink;
		return c3;
	}
	else if (c1 == Blue && c2 == Yellow)
	{
		c3 = Green;
		return  c3;
	}
	else if (c1 == White && c2 == Black)
	{
		c3 = Grey;
		return c3;
	}
	
}

Palette Palette::operator-(Palette sub)
{
	Color c1 = m_color, c2 = sub.m_color, c3;
	if (c1 == Orange && c2 == Red)
	{
		c3 = Yellow;
		return c3;
	}
	else if (c1 == Red&&c2 == Yellow)
	{
		c3 = Orange;
		return  c3;
	}
	else if (c1 == Red && c2 == White)
	{
		c3 = Pink;
		return c3;
	}
	else if (c1 == Blue && c2 == Yellow)
	{
		c3 = Green;
		return  c3;
	}
	else if (c1 == White && c2 == Black)
	{
		c3 = Grey;
		return c3;
	}
	else
		c3 = Undefined;	
}

Palette Palette::operator+=(Palette plusEqual)
{
	Color c1 = m_color, c2 = plusEqual.m_color, c3;
	if (c1 == Red && c2 == Blue)
	{
		c3 = Purple;
		m_color = c3;
		return c3;
	}
	else if (c1 == Red&&c2 == Yellow)
	{
		c3 = Orange;
		m_color = c3;
		return  c3;
	}
	else if (c1 == Red && c2 == White)
	{
		c3 = Pink;
		return c3;
	}
	else if (c1 == Blue && c2 == Yellow)
	{
		c3 = Green;
		m_color = c3;
		return  c3;
	}
	else if (c1 == White && c2 == Black)
	{
		c3 = Grey;
		return c3;
	}
}
//
//Palette & Palette::operator++()
//{
//	m_color++;
//	return *this;
//}
//
//Palette & Palette::operator--()
//{
//}

string Palette::ToString() const
{
	stringstream ss;
	if (m_color == 0)
		ss << "Undefined, " << m_isPrimary;
	else if (m_color == 1)
		ss << "Red, " << m_isPrimary;
	else if (m_color == 2)
		ss << "Blue, " << m_isPrimary;
	else if (m_color == 3)
		ss << "Yellow, " << m_isPrimary;
	else if (m_color == 4)
		ss << "White, ";
	else if (m_color == 5)
		ss << "Black, ";
	else if (m_color == 6)
		ss << "Purple, ";
	else if (m_color == 7)
		ss << "Orange, " << m_isPrimary;
	else if (m_color == 8)
		ss << "Pink, ";
	else if (m_color == 9)
		ss << "Green, " << m_isPrimary;
	else if (m_color == 10)
		ss << "Grey, ";
	return ss.str();
}

//string Palette::colorList()
//{
//	stringstream ss;
//	if (m_color == 0)
//		ss << "Undefined";
//	else if (m_color == 1)
//		ss << "Red";
//	else if (m_color == 2)
//		ss << "Blue";
//	else if (m_color == 3)
//		ss << "Yellow";
//	else if (m_color == 4)
//		ss << "White";
//	else if (m_color == 5)
//		ss << "Black";
//	else if (m_color == 6)
//		ss << "Purple";
//	else if (m_color == 7)
//		ss << "Orange";
//	else if (m_color == 8)
//		ss << "Pink";
//	else if (m_color == 9)
//		ss << "Green";
//	else if (m_color == 10)
//		ss << "Grey";
//	return ss.str();
//}

string& Palette::isPrimary(string primary) const
{
	stringstream ss;
	if (m_isPrimary == true)
		primary = "primary\n";
	else 
		primary= "mixed\n";
	return primary;
}

ostream & operator<<(ostream & os, const Palette & m)
{
	os << m.ToString();
	return os;
}
