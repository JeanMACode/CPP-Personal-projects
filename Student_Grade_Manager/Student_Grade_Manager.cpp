#include <iostream>
#include <cmath>;
using namespace std;
void addStudentGrade(double student, double *grade);// Input student Grade through an Array 
void showStudentGrades(double grade[], double &student);// Displays the grades of the student
void showAverage(double grade[], double &student);//Displays Student Grade Average
double menu(int &choice, double &student, double grade[]);//A switch loop that holds the menu

int main()
{
	double grade[40];
	double student;
	int choice = 0;
	cout << "Enter 0 to Add student grade\nEnter 1 to show Student Grades\nEnter 2 to show Average\nEnter 3 to Exit\n";
	cin >> choice;// What will determine the action of the program
	while (choice==1||choice==2)//The program can't display the average or grades without adding the grades first
	{
		cout << "\nThere are no grades or average to show, add student grades by entering 0\n";
		cin >> choice;
	}
	menu(choice, student, grade);


	while (choice >= 3 )//Makes a Loop until the user terminates it
	{

		menu(choice, student, grade);

	}

	system("pause");
	return 0;
}

void addStudentGrade(double student, double *grade)//Function that lets the user input the grades of a student
{
	int choice;
	int i;
	cout << " How many grades do you wanna input to evaluate the student\n";
	cin >> student;
	if (student > 10 || student < 0)
	{
		cout << "Invalid quantity, input from 1 to 10";
		cin >> student;
	}
	for (i = 0; i < student; i++)
	{
		cout << "Input Student grade #" << i + 1 << " ";
		cin >> grade[i];
		if (grade[i] < 0 || grade[i] > 100)
		{
			cout << "Invalid input, please input a grade from 0 to 100:\n"<<grade[i]<<":";
			cin >> grade[i];
		}
	}
	cout << "\n\nEnter 0 to Add student grade\nEnter 1 to show Student Grades\nEnter 2 to show Average\nEnter 3 to Exit\n";//menu
	cin >> choice;
	menu(choice, student, grade);//Function to choose option from menu

}

void showStudentGrades(double grade[], double &student)//Function that shows the student grades
{
	int choice;
	int i;
	for (i = 0; i < student; i++)
		cout << "Student in his grade #" << i + 1 << " got " << grade[i] << "\n";
	cout << "\n\nEnter 0 to Add student grade\nEnter 1 to show Student Grades\nEnter 2 to show Average\nEnter 3 to Exit\n";//menu
	cin >> choice;
	menu(choice, student, grade);//Function to choose option from menu

}

void showAverage(double grade[], double &student)//Calculates and displays the average of the student grades
{
	int choice;
	int i;
	int sum = 0;

	for (i = 0; i < student; i++)
	{
		sum = sum + grade[i];
	}

	double Average = (sum / (student * 100)) * 100;//Caculates the average

	cout << "The student average is of " << ceil(Average);//Rounds the average


	if (Average <= 65)
	{
		cout << 'F' << "\n";
	}
	else if (Average <= 79)
	{
		cout << 'C' << "\n";
	}
	else if (Average <= 89)
	{
		cout << 'B' << "\n";
	}
	else if (Average >= 90)
	{
		cout << 'A' << "\n";
	}
	cout << "\n\nEnter 0 to Add student grade\nEnter 1 to show Student Grades\nEnter 2 to show Average\nEnter 3 to Exit\n";//menu
	cin >> choice;
	menu(choice, student, grade);//Function to choose option from menu

}


double menu(int &choice, double &student, double grade[])//Function that holds the different options of the menu
{


		switch (choice)
		{
		case 0:
			addStudentGrade(student, grade);
			break;

		case 1:

			showStudentGrades(grade, student);
			break;

		case 2:

			showAverage(grade, student);
			break;

		case 3:
			cout << "You have exited the program.";
			exit(0);//Terminates loop
			break;
		}
	
}