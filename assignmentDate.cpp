#include "assignmentDate.h"
#include "stdafx.h"



assignmentDate::assignmentDate()
{
}


assignmentDate::~assignmentDate()
{
}
//Accessor functions//
int assignmentDate::getmonthVal()
{
	return(monthVal);
}

int assignmentDate::getdayVal()
{
	return(dayVal);
}

int assignmentDate::getyearVal()
{
	return(yearVal);
}
double assignmentDate::getsecVal()
{
	return (secVal);
}


//Mutator functions//
int assignmentDate::setmonthVal(int value)
{
	monthVal = value;
	return(value);
}

int assignmentDate::setdayVal(int value)
{
	dayVal = value;
	return(value);
}

int assignmentDate::setyearVal(int value)
{
	yearVal = value;
	return(value);

}
double assignmentDate::setsecVal(double value)
{
	secVal = value;
	return(value);
}



double assignmentDate::dateToSeconds(int monthVal, int dayVal, int yearVal)
{

	double timeFormat;
	timeFormat = (yearVal - 1970) * 365;
	timeFormat += (yearVal - 1969) / 4;
	for (int i = 0; i < monthVal - 1; i++)
	{
		if (((yearVal % 4 == 0) && (yearVal % 100 != 0)) || (yearVal % 400 == 0))
		{
			int daysOfMonth[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
			timeFormat += daysOfMonth[i];
		}
		else
		{
			int daysOfMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
			timeFormat += daysOfMonth[i];
		}
	}
	timeFormat += dayVal - 1;
	timeFormat = timeFormat * 24 * 60 * 60;

	return(timeFormat);
}
void assignmentDate::inputDates()
{
	cout << "enter month, day and year.\n";
	cin >> monthVal;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits <streamsize>::max(), '\n');
	}

	if ((monthVal < 1) || (monthVal > 12))
	{
		cout << "month input must be from 1 to 12.\n";
		cin >> monthVal;
	}
	cin >> dayVal;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits <streamsize>::max(), '\n');
	}

	if ((dayVal < 1) || (dayVal > 31))
	{
		cout << "day input must be from 1 to 31.\n";
		cin >> dayVal;
	}

	cin >> yearVal;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits <streamsize>::max(), '\n');
	}

	if ((yearVal < 1970) || (monthVal > 2099))
	{
		cout << "year input must be from 1970 to 2099.\n";
		cin >> yearVal;
	}

	cout << "you have selected " << monthVal << ", " << dayVal << ", " << yearVal << "\n";
	ofstream mfile;
	mfile.open("dates2data.txt", std::ofstream::app);
	mfile << monthVal << "," << dayVal << "," << yearVal << endl;
	mfile.close();
	{

		int difference;
		int month, month2, day, day2, year, year2, jdate, jdate2, diff;
		const int daysInYear[] = { 0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
		const int daysInLeapYear[] = { 0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366 };
		const int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		const int daysInMonthLeap[] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

		// You could do your calculations berfore you store the values and have just one.
		jdate = (yearVal - 1900) * 365 + daysInYear[monthVal] + dayVal;
		jdate2 = (second_date_year - 1900) * 365 + daysInYear[second_date_month] + second_date_days;

		difference = abs(jdate - jdate2);
		cout << "The number of days between these dates is: " << difference << endl;

		system("pause");
	}
}
void assignmentDate::outputDates()
{
	string line;
	ifstream mfile;
	mfile.open("dates2data.txt");
	getline(mfile, line);
	cout << line << endl;

	mfile.close();

}
