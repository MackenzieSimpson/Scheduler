// Test and Project Database.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Get rid of pch.h for now
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

	

	cout << "Enter Professor's Name:\n";
	// cin is fine

	getline(cin, Professor);

	cout << "Hello " << Professor << " what is the name of your next assignment?\n";
	
	
	getline(cin, Assignment);
	
	

	cout << "What date would you like " << Assignment << " to be on?\n";
	// Let's tall about what you are doing here

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

		int difference;
		int month, month2, day, day2, year, year2, jdate, jdate2, diff;
		const int daysInYear[] = { 0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
		const int daysInLeapYear[] = { 0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366 };
		const int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		const int daysInMonthLeap[] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

		// You could do your calculations berfore you store the values and have just one.
		jdate = (first_date_year - 1900) * 365 + daysInYear[first_date_month] + first_date_days;
		jdate2 = (second_date_year - 1900) * 365 + daysInYear[second_date_month] + second_date_days;

		difference = abs(jdate - jdate2);
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
