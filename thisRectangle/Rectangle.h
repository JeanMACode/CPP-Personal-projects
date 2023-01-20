#pragma once
#include <iostream>
using namespace std;


class Rectangle
{

private:
	double  width;
	double  length;
public:
	Rectangle();
	Rectangle(double, double);
	Rectangle& setWidth(double);
	Rectangle& setLength(double);
	double getWidth() const;
	double getLength() const;
	double getArea() const;
	double getPerimeter() const;
	void display() const;

	// Friends 
	friend ostream& operator << (ostream&, const Rectangle&);
	friend istream& operator >> (istream&, Rectangle&);

};
