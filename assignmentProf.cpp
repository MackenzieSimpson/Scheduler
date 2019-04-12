#include "assignmentProf.h"
#include "stdafx.h"






assignmentProf::~assignmentProf()
{
}
assignmentProf::assignmentProf(int a, int b)
{
	ProfVal = a;
	CourseNumberVal=b;
	
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



void assignmentProf::enterProf(int a, int b)
{
	cout << "Professor Index is "<<a<<  ".\n";
	
	cout << "Course Number is "<< b << ".\n";
	
	
}
