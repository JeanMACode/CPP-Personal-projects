#include "Empleado.h"
#include <iostream>
#include <cstring>
using namespace std;

void Employee::setname(char *n)
{
	name = new char[strlen(n) + 1];
	strcpy(name, n);
}
void Employee::setidNumber(int id)
{
	idNumber = id;
}

void setdepartment(char *d)
{
	department = new char[strlen(d) + 1];
	strcpy(department, d);
}

void Employee::setPosition(char *p)
{
	position = new char[strlen(p) + 1];
	strcpy(position, p);
}

Employee::Employee(char *n, int id, char *d, char *p)
{
	setname(n);
	setidNumber(id);
}

Employee::Employee()
{
	char temp1[] = "Jan";
	setname(temp1);

	char temp2[] = "IT";
	setdepartment(temp2);

	char temp3[] = "CO";
	setPosition(temp3);

}
Employee::~Employee()
{
	delete[] name;
	delete[] department;
	delete[] position;
	name = nullptr;
	department = nullptr;
	position = nullptr;


}


const char* Employee::getname() const
{
	return name;
}
int Employee::getidNumber() const
{
	return idNumber;
}
const char* Employee::getDepartment()const
{
	return department;
}
const char* Employee::getPosition()const
{
	return position;
}
void Employee::display()const
{
	cout << "El nombre es " << getname() << endl;
	cout << "El id number es " << getidNumber() << endl;
	cout << "El departamento es " << getDepartment() << endl;
	cout << "La posicion es " << getPosition() << endl;

}