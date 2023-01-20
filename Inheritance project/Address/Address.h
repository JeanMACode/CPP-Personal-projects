#pragma once
#include <iostream>
#include <string>
using namespace std;
class Address
{
private:
	string Line1;
	string Line2;
	string Line3;
	string city;
	string state;
	float zipCode;
	float zipCodeExt;

public:
	Address();
	Address(string, string, string,string, string, float, float);
	void setLine1(string);
	void setLine2(string);
	void setLine3(string);
	void setCity(string);
	void setState(string);
	void setZipCode(float);
	void setZipCodeExt(float);
	string getLine1();
	string getLine2();
	string getLine3();
	string getCity();
	string getState();
	float getZipCode();
	float getZipCodeExt();


};