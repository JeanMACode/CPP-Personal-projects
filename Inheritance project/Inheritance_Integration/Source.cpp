#include <iostream>
#include <Fstream>
#include "Employee.h"
#include <string>
using namespace std;
Address a1;
date birth;
void Name1(string fname);
void Name2(string sname);
void Name3(string tname);
void Line1(string ad);
void Line2(string ad);
void Line3(string ad);
void City(string ad);
void zipCode(float ZC);
void zipCodeExt(float ZCE);
void State(string ad);
int getEmpNum();
void birthday(int,int,int);
string add;
void menu(int choice, string add, float ZC, float ZCE,int,int,int);
Employee employee[15];
int position = 0;
const int Num=15;
int EmpNum[Num];


int main()
{
	int year, day, month;
	float ZC;
	float ZCE;
	int choice;
	cout << "\nWelcome to the Human Resource Application. Please select one option from the menu: \n(1) Enter a New Employee \n(2) View all Employee \n(3) Edit an Employee\n(4)Write to File \n(5) Exit\n";
	cin >> choice;
	while (choice != 1)
	{
		cout << " You havent entered any employeee yet, please input information before viewing or editing.";
			cin >> choice;  
    }
	ZC = 0;
	ZCE = 0;
	year = 0;
	month = 0;
	day = 0;
	menu(choice, add,ZC, ZCE,day,year,month);
	do {
		cout << "\nWelcome to the Human Resource Application. Please select one option from the menu: \n(1) Enter a New Employee \n(2) View all Employee \n(3) Edit an Employee\n(4)Write to File \n(5) Exit\n";
		cin >> choice;
		menu(choice, add, ZC, ZCE,day,year,month);
	} while (choice < 4);

	system("pause");
	return 0;
}

void birthday(int day,int year,int month)
{
	cout << " Enter Employee birthday information\n";
	bool birthdayCheck = false;
	do {
		birth.setYear(year);
		birth.setMonth(month);
		birth.setDay(day);
		birth.leapyear(year);
		birthdayCheck = birth.acceptance();
		if (birthdayCheck == false)
		{
			cout << "\n Invalid date, please enter valid birthday\n";
		}
	} while (birthdayCheck == false);



}

int getEmpNum()
{
	return rand();

}


void Name1(string fname)
{
	cout << " Enter first name: ";
	cin.ignore();
	getline(cin, fname);
	employee[position].setFirstName(fname);
}

void Name2(string sname)
{
	cout << " Enter second name: ";
	
	getline(cin, sname);
	employee[position].setLastName(sname);

}
void Name3(string tname)
{
	cout << " Enter last name: ";
		
		getline(cin, tname);
		employee[position].setSecondLastName(tname);

}

void Line1(string add)
{

	cout << " Enter Line 1\n";

	getline(cin, add);
	a1.setLine1(add);

	
}

void Line2(string add)
{

	cout << " Enter Line 2\n";
	getline(cin, add);
	a1.setLine2(add);


}

void Line3(string add)
{

	cout << " Enter Line 3\n";
	getline(cin, add);
	a1.setLine3(add);

}

void City(string add)
{

	cout << " Enter City\n";
	getline(cin, add);
	a1.setCity(add);

}

void zipCode(float ZC)
{


	cout << " Enter Zip Code\n\n";
	cin >> ZC;
	a1.setZipCode(ZC);

	
	while (ZC < 0 || ZC>99999)//Doesnt let the user input more than five numbers or less than 0
	{
		cout << "Invalid input, put your Zip Code\n";
		cin >> ZC;
		a1.setZipCode(ZC);

	}
}

void zipCodeExt(float ZCE)
{

	cout << " Enter Zip Code Ext\n";
	cin >> ZCE;
	a1.setZipCodeExt(ZCE);


	
	while (ZCE < 0 || ZCE>99999)//Doesnt let the user input more than five numbers or less than 0
	{
		cout << "Invalid input, put your Zip Code Ext\n";
		cin >> ZCE;
		a1.setZipCodeExt(ZCE);

	}



}



void State(string add)
{

	cout << " Enter State\n";
	getline(cin, add);
	a1.setState(add);

	if (add.size() != 2)//Makes sure the user inputs two Letters to define his/her state
	{
		cout << "Invalid input, re enter State\n ";
		getline(cin, add);
	}
	a1.setState(add);


}


void Department(string dep)
{
	cout << "Input your department: ";

	getline(cin, dep);
	employee[position].setDepartment(dep);

}

void menu(int choice, string add, float ZC, float ZCE, int day,int year, int month)
{
	
	ofstream outV;


	switch (choice)
	{
	case 1:
		int Emp;
		cout << " Creating new employee:\n ";
		Emp = getEmpNum();
		employee[position].setEmployeeNumber(Emp);
		for (int i = 0; i < position; i++)
		{

			while (Emp == employee[i].getEmployeeNumber())
			{

				Emp = getEmpNum();
				employee[position].setEmployeeNumber(Emp);
			}
		}
		cout << "Employee #: " << employee[position].getEmployeeNumber();
		cout << "\n";
		cout << " Enter your employee information: \n";
		Name1(add);
		cin.ignore();
		cout << "\n";
		Name2(add);
		cin.ignore();
		cout << "\n";
		Name3(add);
		cin.ignore();
		cout << "\n";
	

		//Enter all the details of address
		cout << "\nEntering address data:" << endl;
		Line1(add);
		cin.ignore();
		cout << "\n";
		Line2(add);
		cin.ignore();
		cout << "\n";
		Line3(add);
		cin.ignore();
		cout << "\n";
		City(add);
		cout << "\n";
		State(add);
		cin.ignore();
		cout << "\n";
		zipCode(ZC);
		cin.ignore();
		cout << "\n";
		zipCodeExt(ZCE);
		cin.ignore();
		cout << "\n";
		cin.ignore(); 
		employee[position].setAddress(a1);
		Department(add);
		cin.ignore();
		cout << "\n";
		//Enter birthday details
		birthday(day, year, month);
		employee[position].setBirthday(birth);
		position++;

		break;

	case 2:
		cout << " Displaying all Employees" << "\n";

		for (int i = 0; i < position; i++)
		{
cout << "Employee #" << employee[i].getEmployeeNumber() << "\n";
cout << employee[i].getFirstName() << " " << employee[i].getLastName() << " " << employee[i].getSecondLastName();
cout << endl;
cout << "Address:"; employee[i].displayAddress();//Display Address information
cout<<"\nDepartment: "<< employee[i].getDepartment()<<"\n";
cout << "\nBirthday: "; employee[i].DisplayBirthday();//Display Birthday Information
		}

		break;
	case 3:
		int EmpN;
		int EmpNEdit;
		bool entered;
		entered = false;
		do {
			cout << " Enter the Employee # to edit information: ";
			cin >> EmpN;
			for (int i = 0; i <= position; i++)
			{
				if (EmpN == employee[i].getEmployeeNumber())
				{
					EmpNEdit = i;
					entered = true;
				}
			}
			if (entered == false)
			{
				cout << " Theres no Employee under that number, please try again: \n";
			}
		} while (entered == false);
		

		
		int positiontemp;
		positiontemp = position;
		position = EmpNEdit;

		cout << " Enter your employee information: \n";
		Name1(add);
		cin.ignore();
		cout << "\n";
		Name2(add);
		cin.ignore();
		cout << "\n";
		Name3(add);
		cin.ignore();
		cout << "\n";

		cout << "\nEntering address data:" << endl;

		Line1(add);
		cin.ignore();
		cout << "\n";
		Line2(add);
		cin.ignore();
		cout << "\n";
		Line3(add);
		cin.ignore();
		cout << "\n";
		City(add);
		cout << "\n";
		State(add);
		cin.ignore();
		cout << "\n";
		zipCode(ZC);
		cin.ignore();
		cout << "\n";
		zipCodeExt(ZCE);
		cin.ignore();
		cout << "\n";
		cin.ignore();
		employee[position].setAddress(a1);


		Department(add);
		cin.ignore();
		cout << "\n";

		position = positiontemp;
	
		break;

	case 4:

		outV.open("text4.txt", ios::app);
        outV<< " Displaying all Employees" << "\n";
		
		for (int i = 0; i < position; i++)
		{
			outV<< "Employee #" << employee[i].getEmployeeNumber() << "\n";
			outV<< employee[i].getFirstName() << " " << employee[i].getLastName() << " " << employee[i].getSecondLastName();
			outV<< endl;

			outV << "Address:" << employee[i].getAddress().getLine1() << " " << employee[i].getAddress().getLine2() << " " << employee[i].getAddress().getLine3() << " " << employee[i].getAddress().getCity() << " " << employee[i].getAddress().getState() << " " << employee[i].getAddress().getZipCode() << " " << employee[i].getAddress().getZipCodeExt();//Display Address information			outV<< "\nDepartment: " << employee[i].getDepartment() << "\n";
			outV << "\nBirthday: " << employee[i].getBirthday().getDay() << "/" << employee[i].getBirthday().getMonth() << "/" << employee[i].getBirthday().getYear();//Display Birthday Information
		}
		

		
		outV.close();

		outV.open("SeparateValue1.cvs", ios::app);
		outV << " Displaying all Employees" << "\n";

		for (int i = 0; i < position; i++)
		{
			outV << "Employee #" << employee[i].getEmployeeNumber() << "\n";
			outV << employee[i].getFirstName() << " " << employee[i].getLastName() << " " << employee[i].getSecondLastName();
			outV << endl;

			outV << "Address:" << employee[i].getAddress().getLine1() << " " << employee[i].getAddress().getLine2() << " " << employee[i].getAddress().getLine3() << " " << employee[i].getAddress().getCity() << " " << employee[i].getAddress().getState() << " " << employee[i].getAddress().getZipCode() << " " << employee[i].getAddress().getZipCodeExt();//Display Address information
			outV << "\nDepartment: " << employee[i].getDepartment() << "\n";
			outV << "\nBirthday: "<< employee[i].getBirthday().getDay()<<"/"<< employee[i].getBirthday().getMonth()<<"/"<< employee[i].getBirthday().getYear();//Display Birthday Information
		}


		break;

	case 5:
		exit(0);


	}
}