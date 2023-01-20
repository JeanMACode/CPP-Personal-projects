#pragma once
#include <iostream>
#include <string>
#include "date.h"
#include "Address.h"


using namespace std;
class Person :public date
{
private:
	string firstName;
	string lastName;
	string secondLastName;
	date birthday;
	Address Ad;

public:
	Person();
	Person(string, string, string, Address,date);
   ~Person();
   void setFirstName(string);
   void setLastName(string);
   void setSecondLastName(string);
   void setAddress(Address);
   void setBirthday(date);
   string getFirstName();
   string getLastName();
   string getSecondLastName();
   Address getAddress();
   date getBirthday();


  
   
};

