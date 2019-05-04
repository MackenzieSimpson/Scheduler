#pragma once
class assignmentProf
{
public:
	int a; 
	int b;
	
	assignmentProf();
	~assignmentProf();
	void enterProf();
	//Accessor functions//
	int getProfVal();
	//Preconditions:  None 
	//Postcondition:  ProfVal is returned by function
	
	
	//Mutator functions//
	int setProfVal(int value);
	//Preconditions:  Value to set ProfVal is given in value
	//Postcondition:  ProfVal is set to value, value is also returned.
	
	
private: 
int ProfVal;


};

