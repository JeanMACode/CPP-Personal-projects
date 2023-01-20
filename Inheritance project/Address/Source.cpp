#include <iostream>
#include <string>
#include <iomanip>
#include "Address.h"
using namespace std;
void menu(int choice, string address);// Function that holds the menu
void Line1(string L1);//Lets the user input Line1
void Line2(string L2);//Lets the user input Line2
void Line3(string L3);//Lets the user input Line3
void City(string c);//Lets the user input city
void State(string stat);//Lets the user input state
void zipCode(float ZC);//Lets the user input Zip Code
void zipCodeExt(float ZCE);//Lets the user input Zip Code Ext
Address person[100];
int position = 0;
float ZC;
float ZCE;


int main()
{
	int choice;
	string ad;
	do {
		cout << "\n Enter 0 for adding new address\n Enter 1 to display entered address\n Enter 2 to exit\n";// Shows the user the options that are available in the menu
		cin >> choice;
		menu(choice, ad); 
	} while (choice < 2 || choice > 0);

		system("pause");
		return 0;
}

void menu(int choice,string ad)
{
	switch (choice)
	{

	case 0:
		
		cout << " Enter new address information\n";
		Line1(ad);
		Line2(ad);
		Line3(ad);
		City(ad);
		State(ad);
		zipCode(ZC);
		zipCodeExt(ZCE);
		position++;

		break;

	case 1:
		for (int i = 0; i < position; i++)
		{
			cout << "\n The persons address is:" << person[i].getLine1() << " " << person[i].getLine2() << " " <<
				person[i].getLine3() << " "<<person[i].getCity()<<" "<<person[i].getState()<<" "<< setfill('0')<<setw(5)<<person[i].getZipCode()<<" "<<  
				setfill('0') << setw(5)<<person[i].getZipCodeExt();// A setfill and setw was used to input a 0 when the user doesnt put the full quantity of numbers in the ZipCode or ZipCodeExt
		}


		break;

	case 2:
		cout << "You have exited the program.";
		exit(0);//Terminates loop
		break;

	default:
		break;
	}


}

void Line1(string ad)
{
	
	cout << " Enter Line 1\n";
	cin.ignore();
	getline(cin, ad);
	person[position].setLine1(ad);
}

void Line2(string ad)
{
	
	cout << " Enter Line 2\n";
	getline(cin, ad);
	person[position].setLine2(ad);
	cin.ignore();

}

void Line3(string ad)
{
	
	cout << " Enter Line 3\n";
	getline(cin, ad);
	person[position].setLine3(ad);
	cin.ignore();
}

void City(string ad)
{

	cout << " Enter City\n";
	getline(cin, ad);
	person[position].setCity(ad);
	cin.ignore();
}

void State(string ad)
{
	
		cout << " Enter State\n";
		getline(cin, ad);
		if (ad.size() != 2)//Makes sure the user inputs two Letters to define his/her state
		{
			cout << "Invalid input, re enter State\n ";
			getline(cin, ad);
		}
		person[position].setState(ad);
		cin.ignore();
	
}

void zipCode(float ZC)
{


	cout << " Enter Zip Code\n\n";
	cin >> ZC;
	person[position].setZipCode(ZC);

	while (ZC < 0||ZC>99999)//Doesnt let the user input more than five numbers or less than 0
	{
		cout << "Invalid input, put your Zip Code\n";
		cin >> ZC;
		person[position].setZipCode(ZC);
	}
}

void zipCodeExt(float ZCE)
{

	cout << " Enter Zip Code Ext\n";
	cin >> ZCE;
	person[position].setZipCodeExt(ZCE);

	while (ZCE < 0||ZCE>99999)//Doesnt let the user input more than five numbers or less than 0
	{
		cout << "Invalid input, put your Zip Code Ext\n";
		cin >> ZCE;
		person[position].setZipCodeExt(ZCE);
	}



}
