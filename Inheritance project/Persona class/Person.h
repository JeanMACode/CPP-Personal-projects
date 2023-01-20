#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
	string firstName;
	string lastName;
	string secondLastName;
	string address;

public:
	Person();
	Person(string, string, string, string);
   ~Person();
   void setFirstName(string);
   void setLastName(string);
   void setSecondLastName(string);
   void setAddress(string);
   string getFirstName();
   string getLastName();
   string getSecondLastName();
   string getAddress();
  
   
};