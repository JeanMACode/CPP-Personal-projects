/* Jan Carlos Barreto Torres #127484
Anthony Encarnacion Torres #113862
Jean Marco Ambert   #108124 */

#include "Empleado.h"
#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 50;
void getNumberEmployee(int& size);
void getEmployees(Employee emp[SIZE], int size);
void displayEmployees(Employee emp[SIZE], int size);
int main()
{

	Employee *emp = nullptr;
	int size;

	getNumberEmployee(size);

	emp = new Employee[size];



	getEmployees(emp, size);
	displayEmployees(emp, size);



	delete[] emp;
	emp = nullptr;
	system("pause");
	return 0;
}

void getNumberEmployee(int& size)
{
	cout << "Ingrese la cantidad de empleados\n";
	cin >> size;
}
void getEmployees(Employee emp[SIZE], int size)
{
	char *name=nullptr;
	int idNumber;
	char *department=nullptr;
	char *position=nullptr;
	int index;

	name = new char[size];
	department = new char[size];
	position = new char[size];


	for (index = 0; index < size; index++)
	{
		cin.ignore();

		cout << "Ingrese el nombre\n";
		cin.getline(name,'\n');

		cout << "Ingrese el id number\n";
		cin >> idNumber;
		cin.ignore();

		cout << "Ingrese el departamento\n";
		cin.getline(department, '\n');
		cin.ignore();

		cout << "Ingrese la posicion\n";
		cin.getline(position, '\n'
		);

		emp[index].setname(name);
		emp[index].setidNumber(idNumber);
		emp[index].setdepartment(department);
		emp[index].setPosition(position);

		delete[] name;
		name = nullptr;
		delete[] department;
		department = nullptr;
		delete[] position;
		position = nullptr;
	}
}
void displayEmployees(Employee emp[SIZE], int size)
{
	int index;
	cout << "Name    ID     Deparment    Position\n";

	for (index = 0; index < size; index++)
	{
		emp[index].display();
	}


}