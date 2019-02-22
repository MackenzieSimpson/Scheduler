// File Name:		Test and Project Database.cpp
// Author:			Mackenzie Simpson
// Email Address:	mcsimpson@my.milligan.edu
// Assignment:		Term Project
// Description:		Program to manage assignment dates
// Last Changed:	February 22, 2019

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <stdio.h>
#include <time.h>


using namespace std;

int main()

{
	string date;
	string Professor;
	string Assignment;
	string Answer;
	int first_date_month;
	int first_date_days;
	int first_date_year;
	int difference;
	int jdate, jdate2;
	const int daysInYear[] = { 0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
	const int daysInLeapYear[] = { 0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366 };
	const int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	const int daysInMonthLeap[] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	

	int choice;



	cout << "Choose 1 to input date and assignment. \n";
	cout << "Choose 2 to look at assignment log.\n";
	cout << "Choose 3 to exit the program.\n";
	cout << "Enter your choice and press return.\n";
	cin >> choice;
	{if (choice >= 1 && choice <= 3)
		do
	{
		switch (choice)

		{
		case 1: {

			// Professor inputs his/her name, name of the assignment, and date of the assignment.//
			cout << "Enter Professor's Name.\n";
			cin >> Professor;
			
			cout << "Hello " << Professor << " what is the name of your next assignment?\n";// Echo Professor's Name//
			getline(cin, Professor);
			//Precondition: You must input a single name without a space in order to run this function.//
			//Postcondition: String is where the word entered is stored.  The contents in the string before the call are discarded if any.//
			getline(cin, Assignment);
			//Precondition: You must input a single name without a space in order to run this function.//
			//Postcondition: String is where the word entered is stored.  The contents in the string before the call are discarded if any.//
			
			cout << "What date would you like " << Assignment << " to be on?\n"; //Echo Assignment Name//
			cout << "Put date in DD / MM / YYYY format." << endl;
			cin >> first_date_month; // read the month
			if (std::cin.get() != '/') // make sure there is a slash between MM and DD
			{
				std::cout << "expected /\n";
				return 1;
			}
			std::cin >> first_date_days; // read the day
			if (std::cin.get() != '/') // make sure there is a slash between DD and YYYY
			{
				std::cout << "expected /\n";
				return 1;
			}
			std::cin >> first_date_year; // read the year
			
			
			
			
			time_t current_time;
			struct tm  local_time;
			time(&current_time);
			localtime_s(&local_time, &current_time); 
			//Preconditon:  Must have #include <time.h> at the top to run this function. 
			//Post Condtion: Local Date/Time will be used to insure that the date of assignment is not the same as the current date.//

			int Year = local_time.tm_year + 1900;
			int Month = local_time.tm_mon + 1;
			int Day = local_time.tm_mday;

			int Hour = local_time.tm_hour;
			int Min = local_time.tm_min;
			int Sec = local_time.tm_sec;
			

			if (first_date_days == Day)// make sure that the dates are not the same //
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

				cout << Assignment << " is scheduled for " << first_date_month << "/" << first_date_days << "/" << first_date_year << ", thank you.\n";



				// computing the days in between the inputted dates //
				jdate = (first_date_year - 1900) * 365 + daysInYear[first_date_month] + first_date_days;// Assignment Date Professor inputted//
				jdate2 = (Year- 1900) * 365 + daysInYear[Month] + Day;// Current Date inputted//
				difference = abs(jdate - jdate2);// Number of days in between//
				cout << "The number of days between these dates is: " << difference << endl;
				ofstream mfile;
				mfile.open("data.txt");
				//Precondition:  Date must be in DD/MM/YYYY format without slashes in between and must not already be taken or be the current date.//
				//Postcondition:  The date entered is stored into a text file.// 
				mfile << first_date_month << "/" << first_date_days << "/" << first_date_year << endl;
				
				break;
			}
		}

		case 2: 
			{ 
			string line;
			ifstream myfile("data.txt");
			
			if (myfile.is_open())
			//Precondition:  There must be a date stored in the text file.//
			//Postcondition:  The file will open and print across the screen when requested.//
			{

				while (getline(myfile, line)) {
					cout << "There is an assignment scheduled for "<< line << "." << endl;
				}
				myfile.close();
			//Precondition:  The date must be printed across the screen.//
			//Postcondition:  The file will close.//
			}

			else cout << "Unable to open file";

			}
			return 0;
			break;

		case 3: {
		} cout << "Please hit the red x to exit the program.\n";
			return 0;
			break;


		}
	
	}
	while (choice != 1 || choice != 2 || choice != 3);
	
	{
		cout << "The choice entered is not an option on the menu, please exit the program and enter 1,2, or 3.\n";
	}
	}

	
		return 0;

	

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
