// File Name:		Test and Project Database.cpp
// Author:			Mackenzie Simpson
// Email Address:	mcsimpson@my.milligan.edu
// Assignment:		Term Project
// Description:		Program to manage assignment dates
// Last Changed:	April 30, 2019

#include "assignmentDate.h"
#include "stdafx.h"
#include "assignmentType.h"
#include "assignmentProf.h"
#include "assignmentTest.h"











assignmentDate date;
assignmentType assignment;
assignmentProf prof;
assignmentTest test;


bool register_student(struct student *stud, struct list *ls);
void addToList(struct student *stud, struct list *l);
void showList(struct student *stud, struct list *l);
void listPrint(string ProfessorName[], int SizeArray);
//Precondition: String values are stored in an array.
//				SizeArray is the array size.
//Postcondition: The values of the three arrays will be output to console seperated by tabs in index order.
struct student
{
	char name[20];
	int choice;
	student *next;
	

};

struct list
{
	char name[20];
	int choice;
	list *next;

};


int main()

{

	
	double timeDifference;
	double AssignmentDate;
	string ProfessorName[SizeArray] = { "Dr. Giesey","Dr. Harrell", "Dr. Hampton", "Dr. Holbrook", "Dr. Bao" };
	string Professor;
	string Assignment;
	int choice;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	do
	{
		cout << "Choose 1 to input date and assignment name. \n";
		cout << "Choose 2 to look at assignment log.\n";
		cout << "Choose 3 to enter assignment importance.\n";
		cout << "Choose 4 to enter or look at students.\n";
		cout << "Choose 5 to search for a date.\n";
		cout << "Choose 6 to exit the program.\n";
		cout << "Enter your choice and press return.\n";
		cin >> choice;


		{
			switch (choice)

			{
			case 1: {

				cout << "Here are the professor options.\n";
				listPrint(ProfessorName, SizeArray);
				cout << "Please enter professor last name.\n";
				cin >> Professor;
				

				
				


				assignment.enterAssignment();
				cout << endl;

				test.enterTest();
				cout << endl;


				date.inputDates();
			
				

				cout << endl;




				break;
			}

			case 2:
			{
				
				date.outputDates();
				

				


				
				

				
				

				
				break;
			}
			case 3:
			{
				
				cout << " \n \n How many assignments do you want?";
				int MaxAssignmentLimit;
				cin >> MaxAssignmentLimit;

				string *BestAssignmentArray; //creates the array
				BestAssignmentArray = new string[MaxAssignmentLimit];//Note the use of "new" here, "new" just gives an initial size 


				bool repeat = true;


				while (repeat = true)
				{
					cout << "\n Name an Assignment. Or enter 'done' to end.";
					string AssignmentName;
					cin >> AssignmentName;
					if (AssignmentName != "done")
					{
						cout << "\n What rank should this assignment have?";
						int AssignmentRank;
						cin >> AssignmentRank;
						cout << "\n \n The best assignments are: \n";
						BestAssignmentArray[AssignmentRank-1] = AssignmentName;


						for (int AssignmentList = 1; AssignmentList <= MaxAssignmentLimit ; AssignmentList++)
						{

							cout << "\n" << AssignmentList << "\t" << BestAssignmentArray[AssignmentList-1];
						}
					}
					if (AssignmentName == "done")
					{
						delete[] BestAssignmentArray; // This is our delete operator, it gets rid of the assignment array when we are done with it. It is very important, without it the computer's memory remains commited to the array

						return(0);
					}
				}
				
			
			

				break;
			}
			case 4:
			
			{
				{
					student *s;		//--> creates an object of student...
					s = (struct student *) malloc(sizeof(struct student));

					struct list *ls;
					ls = (struct list *) malloc(sizeof(struct list));
					strcpy(ls->name, "");
					ls->choice = 0;
					ls->next = NULL;
					do
					{
						cout << "Write 1 to register a new student\n";
						cout << "Write 2 to display lists of students registered\n";
						cout << "Write 3 to quit\n";

						int input;
						cin >> input;
						if (input == 1)
						{
							register_student(s, ls);

						}
						else if (input == 2)
						{
							showList(s, ls);
						}
						else if (input == 3)
							exit(0);
						cout << "\n";
					} while (1);

					getch();
				}
				
				break;
			}
			case 5:
			{ 
				string search;
				ifstream FileSearch;
				cout << "enter search word ";
				cin >> search;
				"\n";
				FileSearch.open("dates2data.txt");
				if (FileSearch.is_open())
				{
					string text;
					while (getline(FileSearch, text))
					{
						if (text.find(search) != string::npos) {
							cout << "There is already an assignment listed on this date.\n";
						}
					}

				}
			
			break;


			}
			case 6:
			{ 
				exit(0);
			
			
			}
			break;
			}
		}
	}
		while (choice >= 1 && choice <= 6);
		if (choice != 1 || choice != 2 || choice != 3|| choice!=4 || choice!=5|| choice!=6)

		{
			cout << "The choice entered is not an option on the menu, please exit the program and enter 1,2, or 3.\n";

		}


}

void listPrint(string ProfessorName[], int SizeArray)
{

	for (int i = 0; i < SizeArray; i++)
	{
		cout << i << ":" << ProfessorName[i] << " \t " << endl;
	}
	cout << endl;
	return;

}
bool register_student(struct student *stud, struct list *ls)
				{
					student *s = stud;
					cout << "Write name of student\n";
					cin >> s->name;
					cout << "Enter 1 for electrical or 2 for mechanical\n";
					cin >> s->choice;




					if (s->choice == 1)
					{
						cout << "Student registered in Electrical\n";
						addToList(s, ls);
						return true;
					}
					else if (s->choice == 2)
					{
						cout << "Student registered in Mechanical\n";
						addToList(s, ls);
						return true;
					}

					else
					{
						cout << "undecided\n.";
						return false;
					}



				}




				void addToList(struct student *stud, struct list *l)
				{
					list *pointer = l;
					while (pointer->next != NULL)
					{
						pointer = pointer->next;
					}
					pointer->next = (struct list *) malloc(sizeof(struct list));
					pointer = pointer->next;
					strcpy(pointer->name, stud->name);

					pointer->next = NULL;


				}

				void showList(struct student *stud, struct list *l)
				{
					list *pointer = l;
					if (pointer->next == NULL)
						cout << "No student registered yet!\n";
					else
					{
						cout << "Students statistics are: \n";
						while (pointer->next != NULL)
						{
							pointer = pointer->next;
							cout << "Name of student is: " << pointer->name << "\n";
							cout << "EENG or MENG: ";
							if (pointer->choice = 1)
								cout << "Student is Electrical\n";
							else
								cout << "Student is Mechanical\n";

						}
					}
				}














// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

