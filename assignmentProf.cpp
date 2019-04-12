#include "assignmentProf.h"
#include "stdafx.h"






assignmentProf::~assignmentProf()
{
}
assignmentProf::assignmentProf()
{
	a= 0;
	b= 221;
	
}
//Accessor functions//
int assignmentProf::getProfVal()
{
	return(ProfVal);
}
int assignmentProf::getCourseNumberVal()
{
	return(CourseNumberVal);
}

//Mutator functions
int assignmentProf::setProfVal(int value)
{
	ProfVal = value;
	return(value);
}
int assignmentProf::setCourseNumberVal(int value)
{
	CourseNumberVal = value;
	return(value);
}



void assignmentProf::enterProf(int val1, int val2)
{
	cout << "Please enter Professor Index.\n";
	cin >> val1;
	cout << "Please enter Course Number.\n";
	cin >> val2;
	
}
