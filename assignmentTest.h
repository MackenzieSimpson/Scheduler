#pragma once
#include "assignmentType.h"

class assignmentTest:public assignmentType
{
public:
	assignmentTest();
	~assignmentTest();
	void enterTest();
	//Accessor functions//
	int getstudyTimeVal();
	//Mutator functions//
	int setstudyTimeVal(int value);
	//Preconditions:  Value to set studyTimeVal is given in value
	//Postcondition:  studyTimeVal is set to value, value is also returned.
private:
	int studyTimeVal;

	
};

