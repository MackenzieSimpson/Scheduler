// File Name:		Test and Project Database.cpp
// Author:			Mackenzie Simpson
// Email Address:	mcsimpson@my.milligan.edu
// Assignment:		Term Project
// Description:		Program to manage assignment dates
// Last Changed:	April 04, 2019

#include "assignmentDate.h"
#include "stdafx.h"
#include "assignmentType.h"









assignmentDate date;


void listPrint(int monthValA[], int dayValA[], int yearValA[], int SizeArray);
//Precondition: Three integer values are each stored in a seperate array. 
//				SizeArray is the array size.
//Postcondition: The values of the three arrays will be output to console seperated by tabs in order.

void listPrint(string ProfessorName[], int SizeArray);
//Precondition: String values are stored in an array.
//				SizeArray is the array size.
//Postcondition: The values of the three arrays will be output to console seperated by tabs in index order.

struct ProfessorInfo 
{
	char ProfName[25];
	char CourseName[10];
	char AssignmentName[20];
	char Department[15];
};
struct StudentInfo
{
	char StudentName[30];
	char Major[20];
};

int main()

{

	int yearValA[] = { 2019, 2019, 2019, 2019, 2019 };
	int monthValA[] = { 3,3,3,3,3 };
	int dayValA[] = { 1,2,3,4,5 };
	double timeDifference;
	double AssignmentDate;

	//string date[SizeArray] = { {1, 3, 2019},{2, 3,2019},{3, 3, 2019},{4, 3, 2019},{5, 3, 2019} };//
	string ProfessorName[SizeArray] = { "Dr. Giesey","Dr. Harrell", "Dr. Hampton", "Dr. Holbrook", "Dr. Bao" };
	string AssignmentType[SizeArray] = { "Test", "Quiz", "Project", "Homework", "Lab" };
	string AssignmentName[SizeArray];
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
		cout << "Choose 3 to exit the program.\n";
		cout << "Enter your choice and press return.\n";
		cin >> choice;


		{
			switch (choice)

			{
			case 1: {

				// Professor inputs his/her name, name of the assignment, and date of the assignment.//
				/*cout << "Enter Professor's Index. \n";
				listPrint(ProfessorName, NumberProfessors);*/
				
				struct ProfessorInfo Prof;
				cout << "Please enter Professor Name.\n";
				cin >> Prof.ProfName;
				cout << "Please enter Course Name.\n";
				cin >> Prof.CourseName;
				cout << "Please enter Assignment Name.\n";
				cin >> Prof.AssignmentName;
				cout << "Please enter Department.\n";
				cin >> Prof.Department;


				  

				/*cout << "Hello " << Professor << " what is the name of your next assignment?\n";// Echo Professor's Name//
				getline(cin, Professor);

				getline(cin, Assignment);





				cout << "What date would you like " << Assignment << " to be on?\n"; //Echo Assignment Name//
				cout << "Please enter the date in MM DD YYYY format.\n"*/
				//date format converter

				date.inputDates();
				date.dateToSeconds(04, 02, 2019);

				cout << endl;




				break;
			}

			case 2:
			{
				date.outputDates();


				
				break;
			}
			case 3:
			{ 
			exit (0);
			break;


			}
			}
		}
	}
		while (choice >= 1 && choice <= 3);
		if (choice != 1 || choice != 2 || choice != 3)

		{
			cout << "The choice entered is not an option on the menu, please exit the program and enter 1,2, or 3.\n";

		}


}










void listPrint(int monthValA[], int dayValA[], int yearValA[], int SizeArray)
{

	for (int i = 0; i < SizeArray; i++)
	{
		cout << monthValA[i] << "\t \t" << dayValA[i] << "\t \t" << yearValA[i] << "\t \t" << endl;

	}
	cout << endl;
	return;
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
/*void listPrint(string AssignmentType[], string AssignmentName[], int monthValA[], int dayValA[], int yearValA[], int SizeArray)
{
	for(int i=0; i < SizeArray; i++)
}*/














// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

