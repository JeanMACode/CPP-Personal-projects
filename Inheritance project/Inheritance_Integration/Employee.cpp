
#include <iostream>
#include "Employee.h"
#include <string>

Employee::Employee()
{
	employeeNumber=0;
	Department= "Default";
}
Employee::Employee(int EmployeeNum, string Dep)
{
	setEmployeeNumber(EmployeeNum);
	setDepartment(Dep);
}
Employee::~Employee()
{

}
void Employee::setEmployeeNumber(int EmployeeNum)
{

		employeeNumber = EmployeeNum;

}

void Employee::setDepartment(string Dep)
{
	Department = Dep;
}
int Employee::getEmployeeNumber()
{
	return employeeNumber;
}
string Employee::getDepartment() 
{
	return Department;
}

void Employee::displayAddress()
{
	getAddress().AddressDisplay();
}
void Employee::displayAddressOutV()
{
	getAddress().AddressDisplayOutV();
}
void Employee::DisplayBirthday() 
{
	getBirthday().displayBirthday();
}
void Employee::DisplayBirthdayOutV()
{
	getBirthday().displayBirthdayOutV();
}