#include "Rectangle.h"
#include <iostream>
using namespace std;


int main()
{

	Rectangle box;
	Rectangle box1(4, 5);


	double rectWidth;
	double rectLength;

	cout << "rectangle. What is the width? ";
	cin >> rectWidth;
	cout << "What is the length? ";
	cin >> rectLength;

	box.setWidth(rectWidth).setLength(rectLength);
	box.display();
	box1.display();
	system("pause");
	return 0;
}