#include <iostream>
#include <string>
#include "Person.h"
using namespace std;


Person::Person()
{
	firstName="";
	lastName="";
	secondLastName="";
}
Person::Person(string fn, string sn, string tn, Address add, date Birthday)
{
	setFirstName(fn);
	setLastName(sn);
	setSecondLastName(tn);
	setAddress(add);
	setBirthday(Birthday);
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
void Person::setAddress(Address add)
{
	Ad = add;
}

void Person::setBirthday(date birth)
{
	birthday = birth;
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
Address Person::getAddress()
{
	return Ad;
}
date Person::getBirthday()
{
	return birthday;
}
