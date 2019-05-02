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
assignmentProf prof(0,221);
assignmentTest test;



void listPrint(string ProfessorName[], int SizeArray);
//Precondition: String values are stored in an array.
//				SizeArray is the array size.
//Postcondition: The values of the three arrays will be output to console seperated by tabs in index order.



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
		cout << "Choose 4 to look at Professor Names.\n";
		cout << "Choose 5 to search for a date.\n";
		cout << "Choose 6 to exit the program.\n";
		cout << "Enter your choice and press return.\n";
		cin >> choice;


		{
			switch (choice)

			{
			case 1: {

				
				
				
				


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
						BestAssignmentArray[AssignmentRank] = AssignmentName;


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
				listPrint(ProfessorName, SizeArray);
				struct node
			{
				int data;
				node *next;
			};
			class list
			{
			private:
				node *head, *tail;
			public:
				list()
				{
					head = NULL;
					tail = NULL;
				}
				void createnode(int value)
				{
					node *temp = new node;
					temp->data = value;
					temp->next = NULL;
					if (head == NULL)
					{
						head = temp;
						tail = temp;
						temp = NULL;
					}
					else
					{
						tail->next = temp;
						tail = temp;
					}
				}
				void display()
				{
					node *temp = new node;
					temp = head;
					while (temp != NULL)
					{
						cout << temp->data << "\t";
						temp = temp->next;
					}
				}
				void insert_start(int value)
				{
					node *temp = new node;
					temp->data = value;
					temp->next = head;
					head = temp;
				}
				void insert_position(int pos, int value)
				{
					node *pre = new node;
					node *cur = new node;
					node *temp = new node;
					cur = head;
					for (int i = 1; i < pos; i++)
					{
						pre = cur;
						cur = cur->next;
					}
					temp->data = value;
					pre->next = temp;
					temp->next = cur;
				}
				void delete_first()
				{
					node *temp = new node;
					temp = head;
					head = head->next;
					delete temp;
				}
				void delete_last()
				{
					node *current = new node;
					node *previous = new node;
					current = head;
					while (current->next != NULL)
					{
						previous = current;
						current = current->next;
					}
					tail = previous;
					previous->next = NULL;
					delete current;
				}
				void delete_position(int pos)
				{
					node *current = new node;
					node *previous = new node;
					current = head;
					for (int i = 1; i < pos; i++)
					{
						previous = current;
						current = current->next;
					}
					previous->next = current->next;
				}
			};
			
			{
				list obj;
				obj.createnode(0);
				obj.createnode(1);
				obj.createnode(2);
				obj.createnode(3);
				cout << "\n--------------------------------------------------\n";
				cout << "---------------Displaying All nodes---------------";
				cout << "\n--------------------------------------------------\n";
				obj.display();
				cout << "\n--------------------------------------------------\n";
				cout << "-----------------Inserting At End-----------------";
				cout << "\n--------------------------------------------------\n";
				obj.createnode(4);
				obj.display();
				cout << "\n--------------------------------------------------\n";
				cout << "----------------Inserting At Start----------------";
				cout << "\n--------------------------------------------------\n";
				obj.insert_start(5);
				obj.display();
				cout << "\n--------------------------------------------------\n";
				cout << "-------------Inserting At Particular--------------";
				cout << "\n--------------------------------------------------\n";
				obj.insert_position(5, 6);
				obj.display();
				cout << "\n--------------------------------------------------\n";
				cout << "----------------Deleting At Start-----------------";
				cout << "\n--------------------------------------------------\n";
				obj.delete_first();
				obj.display();
				cout << "\n--------------------------------------------------\n";
				cout << "-----------------Deleing At End-------------------";
				cout << "\n--------------------------------------------------\n";
				obj.delete_last();
				obj.display();
				cout << "\n--------------------------------------------------\n";
				cout << "--------------Deleting At Particular--------------";
				cout << "\n--------------------------------------------------\n";
				obj.delete_position(4);
				obj.display();
				cout << "\n--------------------------------------------------\n";
				system("pause");
				return 0;
			}
				break;
			}
			case 5:
			{ 
				string search;
				ifstream inFile;
				string line;
				inFile.open("dates2data.txt");

				if (!inFile)
				{
					cout << "Unable to open file" << endl;
					exit(1);
				}
				cout << "Enter a day to search for, Please use D,M,YYYY format: ";
				cin >> search;


				size_t pos;
				while (inFile.good())
				{
					getline(inFile, line); // get line from file
					pos = line.find(search); // search
					if (pos != string::npos) // string::npos is returned if string is not found
					{
						cout << "There is already an assignment listed on this date.\n";
						break;
					}
					else
					{
						cout << "There is not an assignment listed on this date.\n";
						break;
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
void listPrintDates(double dayArray[], int ArraySizeDay)
{
	for (int i = 0; i <= ArraySizeDay; i++)
	{
		if (dayArray[i] > 0)
		{
			cout << "you have an assignment on " << dayArray[i] << " of this month";
		}
	}
	return;
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

