
#include <iostream>
#include <fstream>
#include<string>
using namespace std;
// This is the colorCounter program that we used as atemplate for the calculator. 
// Instead of having all the code in main, we have moved it into a function called "run".
// This function accepts an input stream; so it can be run such that everything is read from a 
// file. Our main program is now checking how the user wants to provide input and does things 
// accordingly.

void run(istream& infile)
{ 
   const int end_flag = 0;
   string color;
   int num, b_count=0, r_count=0;
   
   infile >> num;
   while (num != end_flag)
    { 
      infile >> color;
      if (color == "black")
         b_count += num; 
      else if  (color == "red")

	 r_count += num; 
      else
         cout << " We have a problem here \n";   
       
      infile >> num;
    }
   cout << " Black total is " << b_count << endl;
   cout << " Red total is " << r_count << endl;
   
}
int main()
{ 
   int choice;
   cout << "You need to input an alternating sequence of numbers and strings\n  starting with a number, ending in 0.\n";
   cout << "Please enter 1 for keyboard input and anything else for file input" << endl;
   cin >> choice;
   if (choice == 1)
   {
     run(cin);
   }
   else 
   {
     const int NAMESIZE = 20;//input and output file names can be at most 20 characters.
     ifstream in_file;  //declare file name as a string of characters.
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
     run(in_file);
   }
   
   return 0;
}
