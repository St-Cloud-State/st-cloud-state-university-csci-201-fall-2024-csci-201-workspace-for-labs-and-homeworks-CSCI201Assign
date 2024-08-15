// A simple C++ program

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()

{
  const int NAMESIZE = 20;
  //input and output file names can be at most 20 characters.

  ifstream in_file;
  ofstream out_file;
  
  char x; 

  //declare file names as a string of characters. 
  string input_file_name, output_file_name;

  cout << "Please enter name of input file:  ";
  cin >> input_file_name;
  in_file.open(input_file_name.c_str());
  if ( !in_file)
    {
      // abandons operation with error mesg
      cout << "Could not open input file \n";
      return 0;
    }

  cout << "Please enter name of output file:  ";
  cin >> output_file_name;
  out_file.open(output_file_name.c_str());
  if ( !out_file)
    {
      cout << "Could not open output file \n";
      return 0;
    }

  
  /*   copy file by reading and writing each character.
    Note that we use the eof 
    (end of file) operation to check if we have reached the 
    the end of the file, and the get operation to read each character */
  
  in_file.get(x);
  while (!in_file.eof())
    {
      out_file << x;
      in_file.get(x);
    }
  
  in_file.close();
  in_file.clear(); 
  out_file.close(); 
  
  

  return 0;
}
