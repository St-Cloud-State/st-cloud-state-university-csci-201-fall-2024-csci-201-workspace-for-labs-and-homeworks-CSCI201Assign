// compile with "g++ -c angle.cpp"
// i.e., compile without linking. This will
// create an executable file angle.o

#include <cstdlib>
#include "angle.h"

void angle::simplify()
{
  if (second >= 60)
    { 
      int temp = (int)(second/60); minute += temp;
      second -= temp*60;
    }
  if (minute >= 60)
    {
      degree += (minute/60); 
      minute = minute%60;
    }
  if (degree >= 360)
    {
      degree = degree%360;
    }

}

angle angle::add (const angle right)
{
  angle temp;
  temp.second = second + right.second;
  temp.minute = minute + right.minute;
  temp.degree = degree + right.degree;
  temp.simplify();
  return temp;
}

bool angle::bigger (const angle  right)
{
  if (degree > right.degree)
     return true;	
  if (degree < right.degree)
     return false;	
  if (minute > right.minute)
     return true;	
  if (minute < right.minute)
     return false;	
  return (second > right.second);
}

bool angle::read(istream& infile)
{
  char bracket;
  if (infile >> bracket >> degree >> minute >> second
         >> bracket)
     simplify();
  return infile;
}


void  angle::write(ostream& outfile)
{
  char lbracket = '(' ;
  char rbracket = ')' ;
  outfile << lbracket << degree << " " << minute 
          << " " << second << rbracket;
}

