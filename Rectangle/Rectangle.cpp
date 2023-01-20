#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
{
	length = 1.0;
	width = 1.0;
}

Rectangle::Rectangle(double aWidth, double aLength)
{
	setWidth(aWidth);
	setLength(aLength);
}

Rectangle::Rectangle(const Rectangle &anRectangle)
{
	setWidth(anRectangle.getWidth());
	setLength(anRectangle.getLength());
}

void Rectangle::setWidth(double w)
{
	width = w;
}

void Rectangle::setLength(double len)
{
	length = len;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getLength() const
{
	return length;
}
double Rectangle::getArea() const
{
	return width * length;
}



double Rectangle::getPerimeter() const
{
	return  2 * getLength() + 2 * getWidth();
}

void Rectangle::display() const
{
	cout << "Here is the rectangle's data:\n";
	cout << "Width: " << getWidth() << endl;
	cout << "Length: " << getLength() << endl;
	cout << "Area: " << getArea() << endl;
	cout << "Perimeter:" << getPerimeter() << endl;
}
