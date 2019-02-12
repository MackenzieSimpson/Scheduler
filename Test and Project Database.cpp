// File Name:		Test and Project Database.cpp
// Author:			Mackenzie Simpson
// Email Address:	mcsimpson@my.milligan.edu
// Assignment:		Term Project
// Description:		Program to manage assignment dates
// Last Changed:	February 4, 2019

/*
+ Utilize an if statement and 
+ Utilize a multi-level if and/or a while statement.
+ Be properly indented.
+ Has a header comment.
+ Have comments for non-obvious operations.
+ Utilizes a named constant.
+ Utilizes an array.
*/
// Get rid of variables you are not using
#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int main()

{
	
	string date;
	string Professor;
	string Assignment;
	
	int first_date_month;
	int first_date_days;
	int first_date_year;
	int second_date_month;
	int second_date_days;
	int second_date_year;

	int sdays;

	int month_days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	// Professor inputs his/her name, name of the assignment, and date of the assignment.//

		cout << "Enter Professor's Name:\n";
		getline(cin, Professor);

		cout << "Hello " << Professor << " what is the name of your next assignment?\n";// Echo Professor's Name//
		getline(cin, Assignment);
	// Let user know what format you are looking for - MM/DD/YYYY
		cout << "What date would you like " << Assignment << " to be on?\n"; //Echo Assignment Name//
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
			std::cout << "input date: " << first_date_month << "/" << first_date_days << "/" << first_date_year << "\n";
	
		if (first_date_days < 1)
		{
			cout << "Sorry, the date you entered is not avaliable and has been taken already.\n";
		}
		else 
		{
			cout << "The date you entered is avaliable.\n";
			cout << Assignment << " is scheduled for " << first_date_month << "/" << first_date_days << "/" << first_date_year << ", thank you.\n";
			ofstream mfile;
			mfile.open("data.txt");
			mfile << first_date_month << "/" << first_date_days << "/" << first_date_year;
		}
		
			cout << "Enter the current date.\n";
			cin >> second_date_month; // read the month

		if (std::cin.get() != '/') // make sure there is a slash between MM and DD
		{
			std::cout << "expected /\n";
			return 1;
		}
			std::cin >> second_date_days; // read the day
		
		if (std::cin.get() != '/') // make sure there is a slash between DD and YYYY
		{
			std::cout << "expected /\n";
			return 1;
		}
	
			std::cin >> second_date_year; // read the year
			cout << "input date: " << second_date_month << "/" << second_date_days << "/" << second_date_year << "\n";


		{

			int difference; //Make all these variables global by moving up
			int month, month2, day, day2, year, year2, jdate, jdate2, diff;
			const int daysInYear[] = { 0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
			const int daysInLeapYear[] = { 0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366 };
			const int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
			const int daysInMonthLeap[] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

			// Reduce indentation
				jdate = (first_date_year - 1900) * 365 + daysInYear[first_date_month] + first_date_days;// Assignemtn Date Professor inputted//
				jdate2 = (second_date_year - 1900) * 365 + daysInYear[second_date_month] + second_date_days;// Current Date inputted//

				difference = abs(jdate - jdate2);// Number of days in between//
				cout << "The number of days between these dates is: " << difference << endl;

				system("pause");
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
