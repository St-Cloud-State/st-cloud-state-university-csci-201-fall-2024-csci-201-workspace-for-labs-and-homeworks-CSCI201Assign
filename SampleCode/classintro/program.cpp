//compile with "g++ program.cpp colorClass.o"
#include "colorClass.h"
#include <iostream>
#include <fstream>
#include<string>
using namespace std;



int main()
{ 
   colorClass colorCounter;
   int choice;
   cout << "You need to input an alternating sequence of numbers and strings\n  starting with a number, ending in 0.\n";
   cout << "Please enter 1 for keyboard input and anything else for file input" << endl;
   cin >> choice;
   if (choice == 1){
	colorCounter.run(cin);
   }
   else {
	const int NAMESIZE = 20;
	//input and output file names can be at most 20 characters.
	ifstream in_file;
	//declare file name as a string of characters.
	char input_file_name[NAMESIZE+1];

	cout << "Please enter name of input file:  ";
	cin >> input_file_name;
	in_file.open(input_file_name);
	if ( !in_file)
    {
      // abandons operation with error mesg
      cout << "Could not open input file \n";
      return 0;
    }
	colorCounter.run(in_file);
   }
   
   return 0;
}