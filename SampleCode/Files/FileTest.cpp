// A simple C++ program

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  const int NAMESIZE = 20;
  //input and output file names can be at most 20 characters.

  ifstream in_file;
  ofstream out_file;
  
  char x; char y; int i,j, k;

  //declare file names as a string of characters.
  char input_file_name[NAMESIZE+1], output_file_name[NAMESIZE+1];

  cout << "Please enter name of input file:  ";
  cin >> input_file_name;
  in_file.open(input_file_name);
  if ( !in_file)
    {
      // abandons operation with error mesg
      cout << "Could not open input file \n";
      return 0;
    }

  cout << "Please enter name of output file:  ";
  cin >> output_file_name;
  out_file.open(output_file_name);
  if ( !out_file)
    {
      cout << "Could not open output file \n";
      return 0;
    }

  in_file >> i >> j >> x >> y >> k;

  out_file << "Integer1 is " << i << endl;
  out_file << "Integer2 is " << j << endl;
  out_file << "Char is " << x << endl;
  out_file << "Char is " << y << endl;
  out_file << "Integer3 is " << k << endl;

  in_file.close();
  out_file.close(); 

  return 0;
}
