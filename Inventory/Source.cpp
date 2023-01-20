#include <iostream>
using namespace std;
#include "Inventory.h"

int main()
{
	int itemNum, quantity;
	double cost, totalCost;
	Inventory item;

	cout << "Enter item number: ";
	cin >> itemNum;
	cout << "\nEnter item quantity: ";
	cin >> quantity;
	cout << "\nEnter item cost: ";
	cin >> cost;
	cout << endl;

	item.setItemNum(itemNum);
	item.setQuantity(quantity);
	item.setCost(cost);
	item.display();
	system("pause");
	return 0;
}