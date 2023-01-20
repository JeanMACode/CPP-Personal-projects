#include <iostream>
#include <string>
#include "Person.h"
using namespace std;


Person::Person():firstName(""), lastName("") , secondLastName("") , address("")
{
}
Person::Person(string fn, string sn, string tn, string add)
{
	setFirstName(fn);
	setLastName(sn);
	setSecondLastName(tn);
	setAddress(add);

}
Person::~Person()
{
	cout << " Destroying objects\n";
}

void Person::setFirstName(string name1)
{

	firstName = name1;

}

void Person::setLastName(string name2)
{
   lastName = name2;
}
void Person::setSecondLastName(string name3)
{
	secondLastName = name3;
}
void Person::setAddress(string add)
{
	address = add;
}
string Person::getFirstName()
{ 
	return firstName;
}
string Person::getLastName()
{
	return lastName;
}
string Person::getSecondLastName()
{
	return secondLastName;
}
string Person::getAddress()
{
	return address;
}