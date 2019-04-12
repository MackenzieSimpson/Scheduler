#include "assignmentType.h"
#include "stdafx.h"



assignmentType::assignmentType()
{
}


assignmentType::~assignmentType()
{
}

//Accessor functions//
int assignmentType::getAssignmentVal()
{
	return(AssignmentVal);
}
int assignmentType::getAssignmentTypeVal()
{
	return(AssignmentTypeVal);
}

//Mutator functions
int assignmentType::setAssignmentVal(int value)
{
	AssignmentVal = value;
	return(value);
}
int assignmentType::setAssignmentTypeVal(int value)
{
	AssignmentTypeVal = value;
	return(value);
}

void assignmentType::enterAssignment()
{
	cout << "Enter the name of the Assignment. Also, please put a space and the type of assignment.  For example Test, Homework etc.\n";
	cin >> AssignmentVal >> AssignmentTypeVal;
	
}

