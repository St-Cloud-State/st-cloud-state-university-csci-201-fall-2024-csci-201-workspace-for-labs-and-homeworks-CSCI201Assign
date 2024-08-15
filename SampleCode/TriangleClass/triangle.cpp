// compile with "g++ -c triangle.cpp"
// i.e., compile without linking. This will
// create an executable file triangle.o

#include <cstdlib>
#include "triangle.h"


// private function known only within triangle.
void triangle::printChars(int num1, char c,   ostream& out1)
  //prints c num1 times on out1
{
  for( int i = 1; i <= num1; i++)
    out1 << c; 
}


void triangle::draw(ostream& outfile)
{

  int gap1, gap2;
  for (int i = 1; i <= topmargin; i++) {outfile << endl;} // put in the top margin

  // write the first line with height-1+leftmargin spaces and  one star
  printChars(height-1+ leftmargin, ' ', outfile);  
  printChars(1, ch, outfile);
  outfile << endl;

  gap1 = height-2; // initially we have height-2 leading spaces 
  gap2 = 1; // initial gap between stars is 1 
  
  for( int i =1; i<= (height-2);  i++) 
    // we have (height-2) lines of this kind
    {
// write the leading blanks
      printChars(gap1+leftmargin, ' ', outfile); 
     
      printChars(1, ch , outfile);   //write first char

      printChars(gap2, ' ', outfile); //write the in-between blanks

      printChars(1, ch, outfile);   //second char and new line
      outfile << endl;
	
      gap1--; gap2+=2; //update gap1 and gap2

    }

  printChars(leftmargin, ' ', outfile);
  printChars(2*height-1, ch, outfile); //print the last line

  cout << endl;
}


void triangle::read(istream& infile)
{
  char bracket;
  infile >> bracket >> height >> ch >> topmargin
         >> leftmargin >> bracket;
}

void  triangle::write(ostream& outfile)
{
  char lbracket = '(' ;
  char rbracket = ')' ;
  outfile << lbracket << height << " " << ch 
          << " " << topmargin << " " << leftmargin << rbracket;
}

