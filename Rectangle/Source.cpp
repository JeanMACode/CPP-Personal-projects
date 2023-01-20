#include <iostream>
using namespace std;
#include "Rectangle.h"
int main()
{
	Rectangle box1(2,3);
	Rectangle box2(box1);

	box1.display();
	box2.display();
	

	system("pause");
	return 0;
}
