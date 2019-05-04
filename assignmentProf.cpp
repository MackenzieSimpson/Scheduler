#include "assignmentProf.h"
#include "stdafx.h"






assignmentProf::~assignmentProf()
{
}
assignmentProf::assignmentProf()
{
	
	
	
}
//Accessor functions//
int assignmentProf::getProfVal()
{
	return(ProfVal);
}


//Mutator functions
int assignmentProf::setProfVal(int value)
{
	ProfVal = value;
	return(value);
}




void assignmentProf::enterProf()
{
	cout << "Please enter professor last name.\n";
	cin>>ProfVal;
	cout << endl;
	
}
