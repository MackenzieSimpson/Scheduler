#pragma once
class dateClass
{
public:
	dateClass();
	~dateClass();
	double dateToSeconds(int monthVal, int dayVal, int yearVal);
	// Precondition: User inputs dates In mm dd yyyy form.
	// Postcondition: Returns how many seconds from jan 1 1970 to 12:00 am date inputed.
	void inputDates(int& monthVal, int& dayVal, int& yearVal);
	
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

private:
	int dayVal;
	int monthVal;
	int yearVal;
};

