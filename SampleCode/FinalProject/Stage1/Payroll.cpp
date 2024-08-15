// A payroll template C++ program  
  
#include <iostream>  
#include <fstream>  
#include <cstring>  
#include <iomanip>  
using namespace std;  
  
  

  
/*------------------------------------------------------------------------  
  Functions used by main program and the user interface  
  ------------------------------------------------------------------------*/  
  

  
void showmenu()  
{  
  cout<< "Please type in  one of the following options: \n";  
  cout<< "L or l  to load the employee list \n";  
  cout<< "D or d  to display  the employee data \n";  
  cout<< "P or p to process payroll\n";  
  cout<< "C or c to change an employee's wage \n";  
  cout<< "A or a to add a new employee \n";  
  cout<< "S or s to search for a particular employee's information \n";  
  cout<< "R or r to print the payroll results \n";  
  cout<< "M or m to display this menu \n";  
  cout<< "E or e to save and exit \n";  
}  
  
void loadEmployees()  
{  
   cout << "Loading employees \n";
}  
  
void displayData()
{
 cout << "Displaying data \n";
}

void processThePayroll()  
{  
  cout << "Processing payroll \n";

}  
  
  
void changeWages()  
{  
  
  cout << "Changing employee wage\n";  
}  
  
void addNewEmployee()  
{  
  cout << "Adding employee \n";  
}  
  
  
void searchAnEmployee()  
{  
  cout << "Searching employee \n";      
}  
  
void printPayroll()  
{  
  cout << "Printing payroll\n";
}  
  
void saveInfo()  
{  
  cout << "Saving data";  
}  
  
  
/* ---------------------- start of Main Program -----------------------------*/  
  
  
int main()  
{  
  
  char choice;  
  
  showmenu();  
  cout << "Please indicate your choice of operation (m for menu): ";  
  cin >> choice;  
  
  while ((choice != 'e')&& (choice != 'E'))  
    {  
      switch(choice)  
	{  
	case 'l':  
	case 'L': loadEmployees(); break;  
        case 'd':
	case 'D': displayData(); break;
	case 'p':  
	case 'P': processThePayroll();break;  
	case 'c':  
	case 'C': changeWages();break;  
	case 'a':  
	case 'A': addNewEmployee();break;  
	case 's':  
	case 'S': searchAnEmployee();break;  
	case 'r':  
	case 'R': printPayroll();break;  
	case 'm':  
	case 'M': showmenu();break;  
	default : cout << "Not a valid choice" << endl;  
	}  
      cin.ignore(200, '\n'); cin.clear(); //clear out all input  
      cout << "Please indicate your choice of operation (m for menu): ";  
      cin >> choice;  
    }  
  saveInfo();  
  cout << "Thank-you, good bye! \n";  
}  
  
