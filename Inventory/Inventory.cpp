#include <iostream>
using namespace std;
#include "Inventory.h"

Inventory::Inventory()
{
	itemNum = 0;
	quantity = 0;
	cost = 0;
}

Inventory::Inventory(int num, int qt, double c)
{
	num = itemNum;
	qt = quantity;
	c = cost;
}

Inventory::~Inventory() {

}

void Inventory::setItemNum(int num)
{
	if (num >= 0)
		itemNum = num;
	else
	{
		cout << "Invalid item Number\n";
		exit(1);
	}
}

void Inventory::setQuantity(int q)
{
	if (q >= 0)
		quantity = q;
	else
	{
		cout << "Invalid Quantity\n";
		exit(1);
	}
}

void Inventory::setCost(double c)
{
	if (c >= 0)
		cost = c;
	else
	{
		cout << "Invalid Cost\n";
		exit(1);
	}
}
int Inventory::getItemNum() const
{
	return itemNum;
}

int Inventory::getQuantity() const
{
	return quantity;
}

double Inventory::getCost() const
{
	return cost;
}

double Inventory::getTotalCost() const
{
	return getQuantity() * getCost();
}

void Inventory::display() const
{
	cout << "The item number is " << getItemNum() << endl;
	cout << "The quantity is " << getQuantity() << endl;
	cout << "The cost is " << getCost() << endl;
	cout << "The total cost is " << getTotalCost() << endl;
}