#pragma once
class assignmentType
{
public:
	assignmentType();
	~assignmentType();

	void enterAssignment();


	//Accessor functions//
	int getAssignmentVal();
	//Preconditions:  None 
	//Postcondition:  AssignemtVal is returned by function
	int getAssignmentTypeVal();
	//Mutator functions//
	int setAssignmentVal(int value);
	//Preconditions:  Value to set AssignmentVal is given in value
	//Postcondition:  AssignmentVal is set to value, value is also returned.
	int setAssignmentTypeVal(int value);
	
	private:
		int AssignmentVal;
		int AssignmentTypeVal;
};




