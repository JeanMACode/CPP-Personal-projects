#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
void menu(int choice,string fn);
void name(string fn);
void name2(string fn);
void name3(string fn);
void address(string fn);


Person person[100];
int position = 0;

int main()
{
	string fn;
	int choice;
	do {
		cout << "\n Enter 0 for adding person information\n Enter 1 to display entered informartion\n Enter 2 to exit\n";
		cin >> choice;
		menu(choice, fn);
		
	} while (choice<2||choice<0);

	system("pause");
	return 0;
}


void name(string fn)
{
	
	cout << " Enter first name\n";
	cin >> fn;
	person[position].setFirstName(fn);
	
}

void name2(string fn)
{

	cout << " Enter last name\n";
	cin >> fn;
	person[position].setLastName(fn);
	
}
void name3(string fn)
{

	cout << " Enter second last name\n";
	cin >> fn;
	person[position].setSecondLastName(fn);
	
}
void address(string fn)
{

	cout << " Enter address\n";
	cin >> fn;
	person[position].setAddress(fn);
	

}


	void menu(int choice,string fn)
	{


		switch (choice)
		{

		case 0:
			cout << " Enter new person information\n";
			name(fn);
			name2(fn);
			name3(fn);
			address(fn);
			position++;
			

			break;

		case 1:
			for (int i = 0; i < position; i++)
			{
				cout << "\n The persons name is " << person[i].getFirstName() << " " << person[i].getLastName() << " " << person[i].getSecondLastName() << "\n";
				cout << "\n The address of the person is \n" << person[i].getAddress();
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

