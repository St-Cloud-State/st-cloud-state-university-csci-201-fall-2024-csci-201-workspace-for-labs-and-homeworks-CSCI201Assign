// A simple C++ program
//showing nested loops and file input

#include <iostream>
#include <fstream>

using namespace std;

int main()

{
  const int NAMESIZE = 20;
  //input and output file names can be at most 20 characters.

  ifstream in_file;
  ofstream out_file;
  
  int num_rows, num_per_row, number, row_sum;

  //declare file names as an array of chars. 
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

  
  in_file >> num_rows;  
  in_file >> num_per_row;

  for (int i = 1; i <= num_rows; i++)
    {
      row_sum = 0;
      for (int j = 1; j  <= num_per_row; j++)
	{
	  in_file >> number;
	  row_sum += number;
	}

      // Note how to break up a long cout statement

      cout << "sum of row number " 
	       << i << " is " << row_sum << endl; 


    }

  in_file.close();

  return 0;
}
