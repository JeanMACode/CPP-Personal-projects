#pragma once
#include "Person.h"
#include "date.h"
#include <string>
using namespace std;
class Employee: public Person
{
private:
	int employeeNumber;
	string Department;
public:
	Employee();
	Employee(int, string);
	~Employee();
	void setEmployeeNumber(int);
	void setDepartment(string);
	int getEmployeeNumber();
	string getDepartment();
	void displayAddress();
	void displayAddressOutV();
	void DisplayBirthday();
	void DisplayBirthdayOutV();
};
