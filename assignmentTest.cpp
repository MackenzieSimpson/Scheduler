#include "assignmentTest.h"
#include "stdafx.h"



assignmentTest::assignmentTest()
{
}


assignmentTest::~assignmentTest()
{
}
//Accessor functions//
int assignmentTest::getstudyTimeVal()
{
	return(studyTimeVal);
}


//Mutator functions
int assignmentTest::setstudyTimeVal(int value)
{
	studyTimeVal = value;
	return(value);
}

void assignmentTest::enterTest()
{
	cout << "You need to set aside at least 3 hours to study for this since it is a test.\n";
}

