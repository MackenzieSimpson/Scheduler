#pragma once
class assignmentDate
{
public:
	assignmentDate();
	~assignmentDate();
	double dateToSeconds(int monthVal, int dayVal, int yearVal);
	// Precondition: User inputs dates In mm dd yyyy form.
	// Postcondition: Returns how many seconds from jan 1 1970 to 12:00 am date inputed.
	void inputDates();
	//Precondtion: None
	void outputDates();


	//Accessor functions//
	int getmonthVal();
	//Preconditions:  None 
	//Postcondition:  monthVal is returned by function
	int getdayVal();
	//Preconditions:  None 
	//Postcondition:  dayVal is returned by function
	int getyearVal();
	//Preconditions:  None 
	//Postcondition:  yearVal is returned by function
	double getsecVal();



	//Mutator functions//
	int setmonthVal(int value);
	//Preconditions:  Value to set monthVal is given in value
	//Postcondition:  monthVal is set to value, value is also returned.
	int setdayVal(int value);
	//Preconditions:  Value to set dayVal is given in value
	//Postcondition:  dayVal is set to value, value is also returned.
	int setyearVal(int value);
	//Preconditions:  Value to set yearVal is given in value
	//Postcondition:  yearVal is set to value, value is also returned.
	double setsecVal(double value);


private:
	int dayVal, monthVal, yearVal;
	double secVal;
};



