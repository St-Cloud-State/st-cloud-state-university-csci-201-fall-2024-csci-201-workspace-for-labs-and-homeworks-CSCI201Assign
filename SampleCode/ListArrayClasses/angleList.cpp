// compile with "g++ -c angleList.cpp"
// i.e., compile without linking. This will
// create an executable file angleList.o

#include <cstdlib>
#include "angleList.h"

bool angleList::addAngle(angle a)
{ 
  if (count >= maxNum)
    { 
      // we have run out of space
      return false;
    }
  else 
    {
      angleArray[count] = a;
      count++;
      return true;
    }
}

void angleList::printList(ostream& outfile)
{
  for (int i = 0; i < count; i++)
    {
       angleArray[i].write(outfile);
      outfile <<  endl;
    }
}


bool angleList::findMax(angle &a)
{
  if (count == 0) return false;

  angle max = angleArray[0];

  for (int i = 1; i < count; i++)
    {
      if (angleArray[i].bigger( max))
	max = angleArray[i];
    }
  a = max; return true;
}

