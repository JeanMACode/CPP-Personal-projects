#include <iostream>
#include "date.h"
using namespace std;

int main()
{
	date f;
	int day=0, month=0, year=0;
	int choice;

	cout << "Click 1 to input new date and receive validation";
	cin >> choice;
	while (choice != 1)
	{
		cout << "\n Invalid number please click 1 to check date validation or exit by clicking 0\n\n";
		cin >> choice;
	}
	do {
		
		
		switch (choice)
		{
		case 1:
			f.setMonth(month);
			f.setYear(year);
			f.setDay(day);


			{
				bool lp = f.leapyear(year);
			}

			f.acceptance();
			break;

		case 0:
			exit(0);
			break;

		}

		cout << "\nClick 1 to input new date and receive validation\nClick 0 to exit\n";
		cin >> choice;
	} while (choice != 1);

	system("pause");
	return 0;


}
