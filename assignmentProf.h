#pragma once
class assignmentProf
{
public:
	int a, b;
	
	assignmentProf();
	~assignmentProf();
	void enterProf(int val1, int val2);
	//Accessor functions//
	int getProfVal();
	//Preconditions:  None 
	//Postcondition:  ProfVal is returned by function
	int getCourseNumberVal();
	
	//Mutator functions//
	int setProfVal(int value);
	//Preconditions:  Value to set ProfVal is given in value
	//Postcondition:  ProfVal is set to value, value is also returned.
	int setCourseNumberVal(int value);
	
private: 
int ProfVal;
int CourseNumberVal;

};

