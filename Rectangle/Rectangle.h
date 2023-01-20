#pragma once
// Rectangle class declaration. 

class Rectangle
{
private:
	double width;
	double length;


public:
	Rectangle();
	Rectangle(double aWidth, double aLength);
	Rectangle(const Rectangle &anRectangle);
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	double getArea() const;
	double getPerimeter() const;
	void display()const;
};
