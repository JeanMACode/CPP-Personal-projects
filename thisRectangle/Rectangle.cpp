
#include<iostream>
using namespace std;
#include "Rectangle.h"
Rectangle::Rectangle()
{
	this ->width = 1.0;
	this ->length = 1.0;
}

Rectangle::Rectangle(double w, double l)
{
	this->width = w;
	this->length = l;
}

Rectangle &Rectangle::setWidth(double w)
{
   this->width = w;
   return *this;
}


Rectangle &Rectangle::setLength(double len)
{
	this ->length = len;
	return *this;
}

double Rectangle:: getWidth() const
{
	return this -> width;
}

double Rectangle::getLength() const
{
	return this -> length;
}

double Rectangle::getArea() const
{
	return this ->getWidth() *  this->getLength();
}
double Rectangle::getPerimeter() const
{
	return  this->getWidth() * 2 + this->getLength() * 2;
}

void Rectangle::display() const
{
	cout << "Here is the rectangle's data:\n";
	cout << "Width: " << this->getWidth() << endl;
	cout << "Length: " <<this-> getLength() << endl;
	cout << "Area: " << this->getArea() << endl;
	cout << "Perimeter: " << this->getPerimeter() << endl;

}

ostream& operator << (ostream& strm, const Rectangle& obj)
{
	strm << obj.width << " Width, " << obj.length << " Length";
	return strm;
}

istream& operator >> (istream& strm, Rectangle& obj)
{
	cout << "Width: ";
	strm >> obj.width;

	// Prompt the user for the inches. 
	cout << "Length: ";
	strm >> obj.length;

	return strm;
};
