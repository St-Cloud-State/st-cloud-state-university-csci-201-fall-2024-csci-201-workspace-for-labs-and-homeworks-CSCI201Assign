#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


void printChars(int num1,  char ch, ostream& out1)
  //prints ch num1 times on out1
{
  for( int i = 1; i <= num1; i++)
    out1 << ch; 
}


int main()
{
  ofstream outfile;

  outfile.open("triangle.fig");

  char star = '*'; int height, gap1, gap2;

  cout << "Please enter height of triangle:  ";
  cin >> height;

  if (height <= 0) 
   {return 0;}

  cout << endl;

  // write the first line with height-1 spaces and  one star
  printChars(height-1, ' ', outfile);  
  printChars(1, star, outfile);
  outfile << endl;

  gap1 = height-2; // initially we have height-2 leading spaces 
  gap2 = 1; // initial gap between stars is 1 
  
  for( int i =1; i<= (height-2);  i++) 
    // we have (height-2) lines of this kind
    {
// write the leading blanks
      printChars(gap1, ' ', outfile); 
     
      printChars(1, star, outfile);   //write first star

      printChars(gap2, ' ', outfile); //write the in-between blanks

      printChars(1, star, outfile);   //second star and new line
      outfile << endl;
	
      gap1--; gap2+=2; //update gap1 and gap2

    }

  if (height > 1)
    printChars(2*height-1, star, outfile); //print the last line

  outfile << endl;
  return 0;
}
