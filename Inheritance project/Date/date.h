#pragma once
#include <iostream>
using namespace std;

class date
{
private:
	int day;
	int year;
	int month;
public:
	date();
	date(int, int, int);
	~date();
	void setDay(int);
	void setYear(int);
	void setMonth(int);
	int getDay();
	int getYear();
	int getMonth();
	bool leapyear(int);
	void acceptance();
	void display();
};
