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
	cout << "Enter the name of the Assignment.\n";
	cin >> AssignmentVal;
	cout << "What type of assignment is this?. Please put either Test, Homework, or Project.\n";
	cin >> AssignmentTypeVal;
	
}

