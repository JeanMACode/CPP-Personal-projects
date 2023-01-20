#include <iostream>
#include "date.h"
#include <Fstream>
using namespace std;


date::date()
{
	day = 1;
	year = 1753;
	month = 1;
}
date::date(int d, int y, int m)
{
	setDay(d);
	setYear(y);
	setMonth(m);
}

date::~date() {}

void date::setDay(int d)
{
	cout << " Enter day ";
	cin >> d;
	if (month == 1&&month==3&&month==5&&month==7&&month==8&&month==10&&month==12)
	{
		while (d > 31 || d < 1)
		{
			cout << " Input valid day number:";
			cin >> d;
		}
	}
	if (month == 2)
	{

		while (d > 29 || d < 1)
		{
			cout << " Input valid day number:";
			cin >> d;
		}
	}
	if(month==4&&month==6&&month==9&&month==11)
	while (d > 30|| d < 1)
	{
		cout << " Input valid day number:";
		cin >> d;
	}
	day = d;
}

void date::setYear(int y)
{
	cout << " Enter year ";
	cin >> y;
	while (y < 1753||y>2020)
	{
		cout << " input valid year ";
		cin >> y;
    }
	year = y;
}

void date::setMonth(int m)
{ 
	cout << " Enter number of month ";
	cin >> m;
	while (m > 12 || m< 0)
	{
		cout << " Input a valid month number ";
		cin >> m;
	}
	month = m;
}

int date:: getDay()
{
	return day;
}
int date::getYear()
{
	return year;
}
int date:: getMonth()
{
	return month;
}

bool date::leapyear(int y)
{

	double ly = y % 100;
	double ly2 = y % 4;
	double ly3 = y % 400;
	if (ly != 0 && ly2 == 0 || ly3 == 0)
		return true;
	else
		return false;


}

bool date:: acceptance()
{
	bool validation = leapyear(year);
	if (validation==true)
	{
		if (month == 2)
		{
			if (day <= 29)
			{

				return true;

			}
			else
				return true;

		}
		else
			return true;
	}
	if(validation==false)
	{
		if (month == 2)
		{
			if (day >= 29)
			{
				return false;

			}
			else
				return true;

		}
		else
			return true;

	}


}

void date::displayBirthday() 
{
	cout << endl;
	cout << getDay() << "/" << getMonth() << "/" << getYear();
	cout << endl;
}

void date::displayBirthdayOutV()
{
	ofstream outV;
	outV << endl;
	outV << getDay() << "/" << getMonth() << "/" << getYear();
	outV << endl;
}