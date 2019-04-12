// File Name:		Test and Project Database.cpp
// Author:			Mackenzie Simpson
// Email Address:	mcsimpson@my.milligan.edu
// Assignment:		Term Project
// Description:		Program to manage assignment dates
// Last Changed:	April 12, 2019

#include "assignmentDate.h"
#include "stdafx.h"
#include "assignmentType.h"
#include "assignmentProf.h"
#include "assignmentTest.h"










assignmentDate date;
assignmentType assignment;
assignmentProf prof(0,221);
assignmentTest test;


void listPrint(string ProfessorName[], int SizeArray);
//Precondition: String values are stored in an array.
//				SizeArray is the array size.
//Postcondition: The values of the three arrays will be output to console seperated by tabs in index order.

struct StudentInfo
{
	char StudentName[30];
	char CourseName[10];
};

int main()

{

	
	double timeDifference;
	double AssignmentDate;
	string ProfessorName[SizeArray] = { "Dr. Giesey","Dr. Harrell", "Dr. Hampton", "Dr. Holbrook", "Dr. Bao" };
	string Professor;
	string Assignment;
	int choice;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	do
	{
		cout << "Choose 1 to input date and assignment. \n";
		cout << "Choose 2 to look at assignment log.\n";
		cout << "Choose 3 to look at Professor List.\n";
		cout << "Choose 4 to exit the program.\n";
		cout << "Enter your choice and press return.\n";
		cin >> choice;


		{
			switch (choice)

			{
			case 1: {

				
				
				
				cout << "Default professor index is " << prof.a << ".\n";
				cout << "Default course number is " << prof.b << ".\n";
				
				//Could also use constructor this way
				//prof.enterProf(0, 221);
				


				assignment.enterAssignment();
				cout << endl;

				test.enterTest();
				cout << endl;


				date.inputDates();
			
				

				cout << endl;




				break;
			}

			case 2:
			{
				struct StudentInfo Student;
				cout << "Please enter student first and last name without spaces.\n";
				cin >> Student.StudentName;
				cout << "Please enter the course you wish to see assignment for.\n";
				cin >> Student.CourseName;
				date.outputDates();


				
				break;
			}
			case 3:
			{
				listPrint(ProfessorName, SizeArray);
				break;
			}
			case 4:
			{ 
			exit (0);
			break;


			}
			}
		}
	}
		while (choice >= 1 && choice <= 4);
		if (choice != 1 || choice != 2 || choice != 3|| choice!=4)

		{
			cout << "The choice entered is not an option on the menu, please exit the program and enter 1,2, or 3.\n";

		}


}

void listPrint(string ProfessorName[], int SizeArray)
{

	for (int i = 0; i < SizeArray; i++)
	{
		cout << i << ":" << ProfessorName[i] << " \t " << endl;
	}
	cout << endl;
	return;

}















// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

