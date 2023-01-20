#pragma once

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	char *name;
	int idNumber;
	char *department;
	char *position;

public:
	void setname(char *n);
	void setidNumber(int);
	void setdepartment(char *d);
	void setPosition(char *p);
	Employee(char *n, int, char *d, char *p);
	Employee();
	~Employee();

	const char *getname()const;
	int getidNumber()const;
	const char *getDepartment()const;
	const char *getPosition()const;
	void display() const;
};