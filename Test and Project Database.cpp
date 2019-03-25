// File Name:		Test and Project Database.cpp
// Author:			Mackenzie Simpson
// Email Address:	mcsimpson@my.milligan.edu
// Assignment:		Term Project
// Description:		Program to manage assignment dates
// Last Changed:	March 22, 2019

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <stdio.h>
#include <ctime>



using namespace std;

double datetoseconds(int monthVal, int dayVal, int yearVal);
// Precondition: User inputs dates In mm dd yyyy form.
// Postcondition: Returns how many seconds from jan 1 1970 to 12:00 am date inputed.
void listPrint(int monthValA[], int dayValA[], int yearValA[], int SizeArray);
//Precondition: Three integer values are each stored in a seperate array. 
//				SizeArray is the array size.
//Postcondition: The values of the three arrays will be output to console seperated by tabs in order.

void listPrint(string ProfessorName[], int SizeArray);
//Precondition: String values are stored in an array.
//				SizeArray is the array size.
//Postcondition: The values of the three arrays will be output to console seperated by tabs in index order.


int NumberProfessors = 5;
const int SizeArray = 10;
int main()

{
	int dayVal;
	int monthVal;
	int yearVal;
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
	int currentTime;
	int choice;
cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);



	cout << "Choose 1 to input date and assignment. \n";
	cout << "Choose 2 to look at assignment log.\n";
	cout << "Choose 3 to exit the program.\n";
	cout << "Enter your choice and press return.\n";
	cin >> choice;
	while (choice >= 1 && choice <= 3)
		
	{
		switch (choice)

		{
		case 1:
		{

			// Professor inputs his/her name, name of the assignment, and date of the assignment.//
			/*cout << "Enter Professor's Index. \n";
			listPrint(ProfessorName, NumberProfessors);*/

			cout << "Hello " << Professor << " what is the name of your next assignment?\n";// Echo Professor's Name//
			getline(cin, Professor);

			getline(cin, Assignment);





			cout << "What date would you like " << Assignment << " to be on?\n"; //Echo Assignment Name//
			cout << "Please enter the date in MM DD YYYY format.\n";
			//date format converter


			cin >> monthVal;
			if (monthVal < 1 || monthVal > 12)
			{
				cout << "The month entered is not in between 1 and 12, Please restart the program and try again.\n";
			}



			cin >> dayVal;
			if (dayVal < 1 || dayVal > 31)
			{
				cout << "The day entered is not in between 1 and 31, Please restart the program and try again.\n";
			}




			cin >> yearVal;
			if (yearVal != 2019)
			{
				cout << "The year entered is not 2019, Please restart the program and try again.\n";
			}


			else
			{
				cout << "you have selected " << monthVal << ", " << dayVal << ", " << yearVal << "\n";
				AssignmentDate = datetoseconds(monthVal, dayVal, yearVal);


				//cout << "you selected an assignment date for.\n" << AssignmentDate;//
				AssignmentDate = datetoseconds(monthVal, dayVal, yearVal);

				time_t(currentTime);
				currentTime = time(NULL);
				cout << currentTime << " seconds has passed since 00:00:00 GMT, Jan 1, 1970\n";


				timeDifference = AssignmentDate - currentTime;
				cout << "Time until assignment is " << timeDifference << "\n";
			}











			if (dayVal=currentTime)// make sure that the dates are not the same //
			{
				cout << "Sorry, the date you entered is not avaliable.\n";

				if (true)
				{
					cout << "Please restart the program and enter an alternate date. \n";
				}
			}
			else
			{
				cout << "The date you entered is avaliable.\n"; // assignment is stored in text file //

				cout << Assignment << " is scheduled for " << monthVal << "/" << dayVal << "/" << yearVal << ", thank you.\n";//

				ofstream mfile;
				mfile.open("datesdata.txt");
				mfile << Assignment << " " << monthVal << "/" << dayVal << "/" << yearVal << endl;
				//mfile << monthVal << "/" << dayVal << "/" << yearVal << endl;//
				mfile.close();




				/*ListPrint(ProfessorName, SizeArray);
				listPrint(monthValA, dayValA, yearValA, SizeArray);*/
				cout << endl;
				return 0;
				break;
			}
		}

		case 2:
		{
			string line;
			ifstream mfile;
			mfile.open("datesdata.txt");
			getline(mfile, line);
			cout << line << endl;

			mfile.close();
			return 0;
			break;
		}



		case 3:
		{
			cout << "Please hit the red x to exit the program.\n";
			return 0;
			break;


		}

		}
	}
	if (choice != 1 || choice != 2 || choice != 3)
	
	{
		cout << "The choice entered is not an option on the menu, please exit the program and enter 1,2, or 3.\n";
	}
	
	return 0;
}

	
	

	


double datetoseconds(int monthVal, int dayVal, int yearVal)
{

	double timeFormat;
	const int daysOfMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	timeFormat = (yearVal - 1970) * 365;
	timeFormat += (yearVal - 1969) / 4;
	for (int i = 0; i < monthVal - 1; i++)
	{
		timeFormat += daysOfMonth[i];
	}
	timeFormat += dayVal - 1;
	timeFormat = timeFormat * 24 * 60 * 60;
	cout << timeFormat;
	return(timeFormat);
}

void listPrint(int monthValA[], int dayValA[], int yearValA[], int SizeArray)
{

	for (int i = 0; i < SizeArray; i++)
	{
		cout << monthValA[i] << "\t \t" << dayValA[i] << "\t \t" << yearValA[i] << "\t \t" <<  endl;

	}
	cout << endl;
	return;
}

void listPrint(string ProfessorName[], int SizeArray)
{

	for (int i = 0; i < SizeArray; i++)
	{
		cout << i << ":"<< ProfessorName[i] << " \t " << endl;
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
