#include <iostream>
#include <string>
using namespace std;
#include "Address.h"

Address ::Address()
{
	Line1="";
	Line2="";
	Line3="";
	 city="";
	state="";
	zipCode=0;
	zipCodeExt=0;
}

Address::Address(string L1, string L2, string L3, string c, string stat, float ZC, float ZCE)
{
	setLine1(L1);
	setLine2(L2);
	setLine3(L3);
	setCity(c);
	setState(stat);
	setZipCode(ZC);
	setZipCodeExt(ZCE);
}
void Address::setLine1(string L1)
{
	Line1 = L1;
}
void Address::setLine2(string L2)
{
	Line2 = L2;
}
void Address::setLine3(string L3)
{
	Line3 = L3;
}
void Address:: setCity(string c)
{
	city = c;
}
void Address:: setState(string stat)
{
	state = stat;
}
void Address:: setZipCode(float ZC)
{
	zipCode = ZC;
}
void Address::setZipCodeExt(float ZCE)
{
	zipCodeExt = ZCE;
}
string Address:: getLine1()
{
	return Line1;
}
string Address:: getLine2()
{
	return Line2;
}
string Address::getLine3()
{
	return Line3;
}
string Address::getCity()
{
	return city;
}
string Address:: getState()
{
	return state;
}
float Address:: getZipCode()
{
	return zipCode;
}
float Address::getZipCodeExt()
{
	return zipCodeExt;
}

